#include <stdio.h>

int main(){

  int small_space, meduim_space, large_space, N;
  int small_car, meduim_car, large_car, temp;
  int result = 0;

  small_car = meduim_car = large_car = 0;
  scanf("%d %d %d", &small_space, &meduim_space, &large_space);
  scanf("%d", &N);
  while(N--){
    scanf("%d", &temp);
    if(temp <= 199) small_car++;
    else if(temp <= 499) meduim_car++;
    else large_car++; 
  }

  result += large_space > large_car ? large_car : large_space;
  meduim_space += large_space > large_car ? large_space - large_car : 0;
  result += meduim_space > meduim_car ? meduim_car : meduim_space;
  small_space += meduim_space > meduim_car ? meduim_space - meduim_car : 0;
  result += small_space > small_car ? small_car : small_space;

  printf("%d", result);


  return 0;
}
