#include <stdio.h>

int main(void){

  int a = 0;
  int b = 6;
  int c = -3;

  printf("\nUniary +\n");
  printf("a = %d, +a = %d\n", a, +a);
  printf("b = %d, +b = %d\n", b, +b);
  printf("c = %d, +c = %d\n", c, +c);


  printf("\nUniary -\n");
  printf("a = %d, -a = %d\n", a, -a);
  printf("b = %d, -b = %d\n", b, -b);
  printf("c = %d, -c = %d\n", c, -c);


  printf("\nNOT operator !\n");
  printf("a = %d, !a = %d\n", a, !a);
  printf("b = %d, !b = %d\n", b, !b);
  printf("c = %d, !c = %d\n", c, !c);

  return 0;
}
