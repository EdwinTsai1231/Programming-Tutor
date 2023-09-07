#include <stdio.h>
#include <math.h>

typedef long long ll;
ll N, i;

void hanoi(int N, int start, int end, int via){
  if(N == 1){
    printf("move %d from %d to %d\n", 1, start, end);
  }else{

    if(i < pow(2, N-1)){
      hanoi(N-1, start, via, end);
    }else if(i == pow(2, N-1)){
      printf("move %d from %d to %d\n", N, start, end);
    }else{
      i -= pow(2, N-1);
      hanoi(N-1, via, end, start);
    }
  }
}

int main(){

  while(scanf("%lld %lld", &N, &i) != EOF)
    hanoi(N, 1, 3, 2);


}
