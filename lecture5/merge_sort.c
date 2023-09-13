#include <stdio.h>
#include <time.h>
#define SIZE 100000


void merge(int nums[], int l, int m, int r){ // half open [l, m), [m, r)
  int left_len = m-l, right_len = r-m;
  int left_nums[left_len], right_nums[right_len];

  for(int i = 0 ; i < left_len ; i++)
    left_nums[i] = nums[l+i];

  for(int i = 0 ; i < right_len ; i++)
    right_nums[i] = nums[m+i];
 
  int left_idx, right_idx, idx; 
  for(left_idx = 0, right_idx = 0, idx = l ; left_idx < left_len && right_idx < right_len ; idx++){
    if(left_nums[left_idx] < right_nums[right_idx])
      nums[idx] = left_nums[left_idx++];
    else
      nums[idx] = right_nums[right_idx++];
  }

  while(left_idx < left_len)
    nums[idx++] = left_nums[left_idx++];

  while(right_idx < right_len)
    nums[idx++] = right_nums[right_idx++];
}

void merge_sort(int nums[], int l, int r){ // half-open [l, r)
  if(l+1 == r) return;
  int m = (l+r) / 2; // equivalent to m = (l+r) / 2
  merge_sort(nums, l, m);
  merge_sort(nums, m, r);
  merge(nums, l, m, r);
}



int main(){

  int nums[SIZE], temp;
  for(int i = 0 ; i < SIZE ; i++)
    scanf("%d", &nums[i]);

  clock_t start = clock();

  // merge sort
  merge_sort(nums, 0, SIZE);
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
