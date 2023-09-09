#include <stdio.h>

typedef long long ll;

int main(){
 
  int len;
  scanf("%d", &len);
  ll A[len], B[len];
  
  for(int i = 0 ; i < len ; i++)
    scanf("%lld", &A[i]);

  B[0] = A[0];

  for(int i = 1 ; i < len ; i ++)
    B[i] = B[i-1] + A[i];

  for(int i = 0 ; i < len ; i++)
    printf("%lld ", B[i]);

  
  return 0;
}
