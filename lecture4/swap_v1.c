#include <stdio.h>

void swap(int a, int b){
  int temp = a;
  a = b;
  b = temp;
  printf("inside swap: a = %d, b = %d\n", a, b);
  return;
}

int main(){

  int a = 3, b = 7;
  printf("before swap: a = %d, b = %d\n", a, b);
  swap(a, b);
  printf("after swap: a = %d, b = %d\n", a, b);
  return 0;
}
