#include <stdio.h>

typedef long long ll;

int main(){
 
  ll n, m;
  while(scanf("%lld %lld", &n, &m) != EOF){
    if(m == 0){
      printf("Go Kevin!!\n");
    }else{
      for(ll i = 1 ; n > 0 ; i += m)
        n -= i;
    
      if(n == 0) printf("Go Kevin!!\n");
      else printf("No Stop!!\n");
    }

  }


  return 0;
}
