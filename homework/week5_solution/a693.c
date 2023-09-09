#include <stdio.h>

int main(){
  int n, m, nums[100001];
  while(scanf("%d %d", &n, &m) != EOF){
  
    nums[0] = 0;
    for(int i = 1 ; i <= n ; i++){
      if(i == 1){
        scanf("%d", &nums[1]);
      }else{
        scanf("%d", &nums[i]);
        nums[i] += nums[i-1];
      }
    }
  
    int l, r;
    for(int i = 0 ; i < m ; i++){
      scanf("%d %d", &l, &r);
      printf("%d\n", nums[r] - nums[l-1]);
    }
  }


  return 0;
}
