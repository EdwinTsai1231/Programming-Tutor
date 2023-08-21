#include <stdio.h>
#include <stdbool.h>

int main(void){
  char c;
  int max_1 = -1, max_2 = 10, last_three = 0;
  for(int i = 0 ; i < 9 ; i++){
    scanf("%c", &c);
    if(c - '0' > max_1){
      max_2 = max_1;
      max_1 = c - '0';
    }else if(c - '0' > max_2){
      max_2 = c - '0';
    }

    if(i == 6) last_three += (c-'0') * 100;
    else if(i == 7) last_three += (c-'0') * 10;
    else if(i == 8) last_three += (c-'0');
  }
  if(max_1 * max_1 + max_2 * max_2 == last_three)
    printf("Good Morning!");
  else
    printf("SPY!");

  return 0;
}
