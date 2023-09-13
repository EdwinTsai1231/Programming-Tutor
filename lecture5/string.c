#include <stdio.h>

int main(){

  char temp[6] = "hello";

  printf("%s\n", temp);

  temp[2] = '\0';
  printf("%s\n", temp);

  char ch = 'a';
  char str1[] = "a";
  char str2[] = "hello";

  printf("ch: %ld bytes\n", sizeof(ch));
  printf("str1: %ld bytes\n", sizeof(str1));
  printf("str2: %ld bytes\n", sizeof(str2));

  char test[100];
  scanf("%s", test);
  printf("%s", test);

  return 0;
}
