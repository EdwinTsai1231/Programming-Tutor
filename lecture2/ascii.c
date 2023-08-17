#include <stdio.h>

int main(){

  char ch = 'a';
  
  printf("ch = %c\n", ch);
  printf("ASCII of ch = %d\n", ch);

  printf("\nCharacter corresponded to 110: %c\n", 110);

  printf("\nASCII of 7 is %d not 7\n", '7');

  printf("\nWe can do some arithmatic operation on char\n");
  printf("List all lowercase letters\n");
  for(int i = 0 ; i < 26 ; i++) printf("%c ", 'a'+i);
  printf("\n");

  printf("\nturn lowercase letter to uppercase\n");
  ch = 'd';
  printf("ch = %c, ASCII: %d\n", ch, ch);
  printf("Turn ch to uppercase by adding 'A'-'a': %c, ASCII: %d\n", ch + 'A' - 'a', ch + 'A' - 'a');



  return 0;
}
