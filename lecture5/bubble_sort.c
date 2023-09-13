#include <stdio.h>
#include <time.h>
#define SIZE 100000

int main(){

  int nums[SIZE], temp;
  for(int i = 0 ; i < SIZE ; i++)
    scanf("%d", &nums[i]);

  clock_t start = clock();

  // bubble sort
  for(int i = 0 ;i < SIZE ; i++){
    for(int j = 0 ; j < SIZE-1 ; j++){
      if(nums[j] > nums[j+1]){
        temp = nums[j];
        nums[j] = nums[j+1];
        nums[j+1] = temp;
      }
    }
  }
  
  clock_t end = clock();
  float seconds = (float)(end - start) / CLOCKS_PER_SEC;

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
