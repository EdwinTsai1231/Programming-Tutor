#include <stdio.h>
#include <stdbool.h>

int main(){
  int number, last, begin_zero = true;
  scanf("%d", &number);

  if(number == 0){
    printf("0");
    return 0;
  }

  while(number!=0){
    last = number % 10;
   
    if(last == 0 && begin_zero == true){
      number /= 10;
      continue;
    }else{ 
      printf("%d", last);
      begin_zero = false;
      number/=10;
    }
  }

  return 0;
}
