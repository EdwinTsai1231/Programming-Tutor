#include <stdio.h>

int main(){
  int num1 = 9;
  printf("_____%d_____\n", num1);
  printf("_____%5d_____\n", num1);
  printf("_____%-5d_____\n", num1);
  printf("_____%05d_____\n", num1);
  printf("_____%+5d_____\n", num1);

  float num2 = 3.14159;
  printf("_____%f_____\n", num2);
  printf("_____%10f_____\n", num2);
  printf("_____%-10f_____\n", num2);
  printf("_____%010f_____\n", num2);
  printf("_____%+10f_____\n", num2);


  printf("_____%10.2f_____\n", num2);
  printf("_____%-10.2f_____\n", num2);
  printf("_____%010.2f_____\n", num2);
  
  return 0;
}
