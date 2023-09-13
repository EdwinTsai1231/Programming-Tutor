#include <stdio.h>

int main(){

  int nums[] = {0, 1, 2, 3 ,4 ,100};

  printf("nums: %p\n", nums);

  for(int i = 0 ; (int)sizeof(nums) > 0 && i < sizeof(nums)/sizeof(nums[0]) ; i++){
    printf("nums[%d]: %d, %p\n", i, nums[i], &nums[i]);
  }


  return 0;
}
