#include <stdio.h>
#define MAX 30000


int main(){

  int n;
  long long f[MAX+1], g[MAX+1];
  f[1] = g[1] = 1;
  for(int i = 2 ; i <= MAX ; i++){
    f[i] = i + f[i-1];
    g[i] = f[i] + g[i-1];
  }

  while(scanf("%d", &n) != EOF){
    printf("%lld %lld\n", f[n], g[n]);
  }

  return 0;
}
