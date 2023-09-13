#include <stdio.h>

void swap(int array[], int index1, int index2);

int main(){
  int nums[] = {0, 2, 5, 1, 6, 3};

  int idx1 = 0, idx2 = 4;
  printf("before swap: arr[%d] = %d, arr[%d] = %d\n", idx1, nums[idx1], idx2, nums[idx2]);
  swap(nums, idx1, idx2); 
  printf("after swap: arr[%d] = %d, arr[%d] = %d\n", idx1, nums[idx1], idx2, nums[idx2]);
  

}

void swap(int arr[], int x, int y){
  int temp = arr[x];
  arr[x] = arr[y];
  arr[y] = temp;
  printf("inside swap: arr[%d] = %d, arr[%d] = %d\n", x, arr[x], y, arr[y]);

}
