#include <stdio.h>

int main(){

  int n;
  char c[100] = "\0";
  scanf("%d", &n);

  for(int i = 0 ; i < n ; i++){
    c[i] = '_';
  }

  for(int i = 0 ; i < n ; i++){
    c[n-1-i] = '*';
    printf("%s\n", c);
  }
  
  return 0;
}
