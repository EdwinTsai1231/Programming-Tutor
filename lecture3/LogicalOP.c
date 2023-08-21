#include <stdio.h>

int func(){
  printf("Do not happen short circuit\n");
  return 1;
}
int func1(){
  printf("True\n");
  return 1;
}
int func2(){
  printf("False\n");
  return 1;
}
int func3(){
  printf("Hello\n");
  return 3;
}
int func4(){
  printf("OlleH\n");
  return 4;
}

int main(){

  int a = 0;
  printf("\na = %d\n", a);
  printf("a && func:\n");
  a && func();
  printf("a || func:\n");
  a || func();

  a = a ? func1() : func3() ? func4() : func2();

  a = 0;
  printf("\na = %d\n", a);
  printf("a && func:\n");
  a && func();
  printf("a || func:\n");
  a || func();



  return 0;
}
