#include <stdio.h>

int main(){

  short num = 32767; // maximum value of short int
  printf("num = %d\n", num);
  num++;
  printf("num + 1 = %d\n", num);
  num++;
  printf("num + 2 = %d\n", num);

  printf("\n");
  short num_2 = -32768; // minimum value of short int
  printf("num_2 = %d\n", num_2);
  num_2--;
  printf("num_2 - 1 = %d\n", num_2);
  num_2--;
  printf("num_2 - 2 = %d\n", num_2);

  printf("\n");
  unsigned short num_3 = 65535; // maximum value of unsigned short 
  printf("num_3 = %d\n", num_3);
  num_3++;
  printf("num_3 + 1 = %d\n", num_3);
  num_3++;
  printf("num_3 + 2 = %d\n", num_3);
 
  printf("\n");
  unsigned short num_4 = 0; // minimum value of unsigned short 
  printf("num_4 = %d\n", num_4);
  num_4--;
  printf("num_4 - 1 = %d\n", num_4);
  num_4--;
  printf("num_4 - 2 = %d\n", num_4);

  return 0;
}
