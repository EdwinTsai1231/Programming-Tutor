#include <stdio.h>

void recursion(int nums[], int n, int m, int idx, int start, int buffer[]){
  if(idx == m){
    for(int i = 0 ; i < m ; i++)
      printf("%d ", buffer[i]);
    printf("\n");
    return;
  }

  for(int i = start ; i < n ; i++){
    buffer[idx++] = nums[i];
    recursion(nums, n, m, idx, i+1, buffer);
    idx--;
  }
}
int main(){
  int n, m, temp;
  do{
    scanf("%d", &n);
    if(n == 0) break;

    int nums[n];
    for(int i = 0 ; i < n ; i++)
      scanf("%d", &nums[i]);

    scanf("%d", &m);

    for(int i = 0 ; i < n ; i++){
      for(int j = 0 ; j < n-1 ; j++){
        if(nums[j] <= nums[j+1]) continue;
        temp = nums[j];
        nums[j] = nums[j+1], nums[j+1] = temp;
      }
    }

    int buffer[n];
    recursion(nums, n, m, 0, 0, buffer);

    printf("\n");




  }while(1);
  return 0;
}
