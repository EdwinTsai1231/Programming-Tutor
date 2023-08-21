#include <stdio.h>


int main(void){

  printf("\nRelational Operator\n");
  int a = 2, b = 3;
  int c = a == b;
  printf("%d == %d = %d\n", a, b, c);
  a = 3;
  c = a == b;
  printf("%d == %d = %d\n", a, b, c);


  return 0;
}
