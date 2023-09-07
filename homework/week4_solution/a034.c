#include <stdio.h>

// int main(){
//
//   int n, buffer[1000000], len;
//   while(scanf("%d", &n) != EOF){
//     len = 0;
//     while(n!=0){
//       buffer[len++] = n%2;
//       n /= 2;
//     }
//
//     for(int i = len-1 ; i >= 0 ; i--)
//       printf("%d", buffer[i]);
//     printf("\n");
//   }
//
//
//   return 0;
// }

void recursion(int n){
  if(n == 0) return;

  recursion(n/2);
  printf("%d", n%2);
}


int main(){
  int n;

  while(scanf("%d", &n) != EOF){
    if(n == 0) printf("0");
    else recursion(n);
    printf("\n");
  }


}
