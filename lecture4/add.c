#include <stdio.h>


void func(int *a, int *b){ // int a = 3, b = 6
  *a += 5; // a = a+5
  *b += 10; // b = b+5
}

int main(void){
  int a = 3, b = 6;

  printf("%d %d\n", a, b);
  func(&a, &b);
  printf("%d %d\n", a, b);
  
  return 0;
}


