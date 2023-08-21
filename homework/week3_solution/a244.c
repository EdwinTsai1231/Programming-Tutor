#include <stdio.h>

int main(){
  int N;
  scanf("%d", &N);
  long long a, b, c;
  while(N--){
    scanf("%lld %lld %lld", &a, &b, &c);
    if(a == 1) printf("%lld\n", b+c);
    else if(a == 2) printf("%lld\n", b-c);
    else if(a == 3) printf("%lld\n", b*c);
    else if(a == 4) printf("%lld\n", b/c);

  }

}
