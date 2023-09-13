#include <stdio.h>
#include <time.h>
#define SIZE 100000


int partition(int nums[], int l, int r){ // half open [l, m), [m, r)
  int pivot = nums[r]; // choose rightmost element as pivot
  
  int greater_idx = l-1, temp;
  for(int i = l ; i < r ; i++){
    if(nums[i] < pivot){
      greater_idx++;

      temp = nums[i];
      nums[i] = nums[greater_idx];
      nums[greater_idx] = temp;
    }
  }

  greater_idx++;
  temp = nums[r];
  nums[r] = nums[greater_idx];
  nums[greater_idx] = temp;

  return greater_idx;

}

void quick_sort(int nums[], int l, int r){ // close [l, r]
  if(l>=r) return;
  int pivot = partition(nums, l, r);
  quick_sort(nums, l, pivot-1);
  quick_sort(nums, pivot+1, r);
}



int main(){

  int nums[SIZE], temp;
  for(int i = 0 ; i < SIZE ; i++)
    scanf("%d", &nums[i]);

  clock_t start = clock();

  // merge sort
  quick_sort(nums, 0, SIZE - 1);
  clock_t end = clock();
  float seconds = (float)(end - start) / CLOCKS_PER_SEC;

  // check whether it is sorted or not
  int isFailed = 0;
  for(int i = 0 ; i < SIZE-1 ; i++)
    if(nums[i] > nums[i+1])
      isFailed = 1;
    

  for(int i = 0 ; i < SIZE ; i++)
    printf("%d ", nums[i]);

  if(isFailed != 0) printf("\nFAILED\n");
  else printf("\nSUCCEED\n");

  printf("CPU time: %fms\n", seconds*1000);


  return 0;
}
