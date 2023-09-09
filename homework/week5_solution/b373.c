#include <stdio.h>

void swap(int *a, int *b){
  int temp = *a;
  *a = *b, *b = temp;
}

int main(){

  int n, nums[10000], count = 0;
  scanf("%d", &n);
  for(int i = 0 ; i < n ; i++)
    scanf("%d", &nums[i]);

  for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < n-1 ; j++){
      if(nums[j] <= nums[j+1]) continue;
      swap(&nums[j], &nums[j+1]);
      count++;
    }
  }

  printf("%d", count);

  return 0;
}
