#include <stdio.h>
#include <stdbool.h>

typedef unsigned long long ull;

void swap(ull *a, ull *b){
  ull temp = *a;
  *a = *b;
  *b = temp; 
}

bool recursion(ull nums[], int n, int start, ull buffer[], int idx, ull sum, ull m){
  if(idx >= n || sum > m) return false;
  if(sum == m){
    for(int i = 0 ; i < idx ; i++)
      printf("%lld ", buffer[i]);
    printf("\n");
    return true;
  }

  bool hasResult = false;

  for(int i = start ; i < n ; i++){
    sum += nums[i];
    buffer[idx++] = nums[i];
    hasResult |= recursion(nums, n, i+1, buffer, idx, sum, m);
    idx--;
    sum -= nums[i];
  }
  
  return hasResult;
}

int main(){

  int n;
  ull nums[30], m, sum = 0, buffer[30];

  scanf("%d %lld", &n, &m);
  for(int i = 0 ; i < n ; i++)
    scanf("%lld", &nums[i]);

  for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < n-1 ; j++){
      if(nums[j] < nums[j+1]) continue;
      swap(&nums[j], &nums[j+1]);
    }
  }

  if(recursion(nums, n, 0, buffer, 0, sum, m) == false)
    printf("%d", -1);

  

  return 0;
}
