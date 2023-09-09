#include <stdio.h>

int main(){
  char input[8];
  int num;

  scanf("%s", input);
  for(int i = 0 ; i < 6 ; i++){
    num = input[i] > input [i+1] ? input[i] - input[i+1] : input[i+1] - input[i];
    printf("%d", num);
  }

  return 0;
}
