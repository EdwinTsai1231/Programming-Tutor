#include <stdio.h>

int main(){
  
  char string[1000000];
  scanf("%s", string);
  
  for(int i = 0 ; string[i] != '\0' ; i++)
    putchar((char)string[i]-7);

  return 0;
}
