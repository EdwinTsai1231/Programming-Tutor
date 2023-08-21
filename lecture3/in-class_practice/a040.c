#include <stdio.h>

int main(){
  int n, m, temp, num[7], idx, len, sum;
  scanf("%d %d", &n, &m);
  int isEmpty = 1;
  for(int i = n ; i <= m ; i++){
    temp = i;
    idx = 0;
    sum = 0;
    while(temp){
      num[idx++] = temp % 10;
      temp /= 10;
    }
    for(int i = 0 ; i < idx ; i++){
      int digit = 1;
      for(int j = 0 ; j < idx ; j++){
        digit *= num[i];
      }
      sum += digit;
    }
    if(i == sum){
      isEmpty = 0;
      printf("%d ", i);
    }
  }
  if(isEmpty) printf("none");


  return 0;
}
