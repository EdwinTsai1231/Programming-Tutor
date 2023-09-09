#include <stdio.h>

int n, idx;
char nums[15];

void recursion(void){
  if(idx == n){
    printf("%s\n", nums);
    return ;
  }
  nums[idx] = '0';
  idx++;
  recursion();
  idx--;
  nums[idx] = '1';
  idx++;
  recursion();
  idx--; 
}

int main(){
  while(scanf("%d", &n) != EOF){
    for(int i = 0 ; i < 15 ; i++) nums[i] = '\0';
    idx = 0;
    recursion();  
  }
  return 0;
}
