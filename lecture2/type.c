#include <stdio.h>

int main(){
  
  printf("\n-----size of signed integer unit: byte-----\n");
  printf("sizeof(short) = %ld\n", sizeof(short));
  printf("sizeof(int) = %ld\n", sizeof(int));
  printf("sizeof(long) = %ld\n", sizeof(long));
  printf("sizeof(long long) = %ld\n", sizeof(long long ));
 
  printf("\n-----size of unsigned integer unit: byte-----\n");
  printf("sizeof(unsigned short) = %ld\n", sizeof(unsigned short));
  printf("sizeof(unsigned int) = %ld\n", sizeof(unsigned int));
  printf("sizeof(unsigned long) = %ld\n", sizeof(unsigned long));
  printf("sizeof(unsigned long long) = %ld\n", sizeof(unsigned long long));

  printf("\n-----size of signed floating number unit: byte-----\n");
  printf("sizeof(float) = %ld\n", sizeof(float));
  printf("sizeof(double) = %ld\n", sizeof(double));
  printf("sizeof(long double) = %ld\n", sizeof(long double));

  return 0;
}
