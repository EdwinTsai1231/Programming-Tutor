#include <stdio.h>

int main(){

  int n;
  scanf("%d", &n);
  int len = 2*n - 1;
  char line[len+1];
  line[len] = '\0';

  for(int i = 0 ; i < len ; i++)
    line[i] = '_';

  for(int i = 0 ; i < n ; i++){
    line[len/2 + i] = '*';
    line[len/2 - i] = '*';
    printf("%s\n", line);
  }



  return 0;
}
