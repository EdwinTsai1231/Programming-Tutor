#include <stdio.h>
#define MAX 1000

void swap(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main(){

  int n, nums[MAX];
  while(scanf("%d", &n) != EOF){
    for(int i = 0 ; i < n ; i++)
      scanf("%d", &nums[i]);
      
    for(int i = 0 ; i < n-1 ;){
      if(nums[i] % 10 < nums[i+1] % 10){
        i++;
        continue;
      }
      if(nums[i] % 10 == nums[i+1] % 10 && nums[i] / 10 >= nums[i+1] / 10){
        i++;
        continue;
      }

      for(int j = i ; j < n-1 &&
          ( nums[j] % 10 > nums[j+1] % 10 || 
          ( nums[j] % 10 == nums[j+1] % 10 && 
            nums[j] / 10 < nums[j+1] / 10)
          ) ; j++ ){
        swap(&nums[j], &nums[j+1]);
      }
      i = 0;
    }

    for(int i = 0 ; i < n ; i++)
      printf("%d ", nums[i]);

    printf("\n");



  }

  return 0;
}
