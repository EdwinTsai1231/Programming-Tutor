#include <stdio.h>
#include <string.h>

int main(){

  char input[1000];
  scanf("%s", input);
  int len = strlen(input);
  int isPalimdrome = 1;
  
  if(len % 2 == 0){
    for(int i = 0 ; i < len/2 ; i++){
      if(input[i] != input[len - 1 - i])
        isPalimdrome = 0;
    }
  }else{
    for(int i = 0 ; i < len / 2 ; i++){
      if(input[i] != input[len - 1 - i])
        isPalimdrome = 0;
    }
  }

  if(isPalimdrome) printf("yes");
  else printf("no");
  
  return 0;
}
