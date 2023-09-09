#include <stdio.h>
#include <string.h>


int main(){
  
  char string[1000];
  scanf("%s", string);
  int n = strlen(string);

  for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < n ; j++){
      printf("%c", string[(i+j) % n]);
    }
    printf("\n");
  }

  return 0;

}
