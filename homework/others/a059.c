// #include <stdio.h>
// #include <math.h>

// int main(){
//   int testcases, sqrt_a, sqrt_b, sum, casenumber = 1;
//   double a, b;
//   scanf("%d", &testcases);

//   while(testcases--){
//     scanf("%lf %lf", &a, &b);
//     sqrt_a = (int) sqrt(a-1);
//     sqrt_b = (int) sqrt(b);

//     sum = sqrt_b * (sqrt_b+1) * (2*sqrt_b+1)/6 - sqrt_a * (sqrt_a+1)*(2*sqrt_a+1) / 6;

//     printf("Case %d: %d\n", casenumber++, sum);
//   }

// }


#include <stdio.h>

int main(){
  int testcases, caseNumber = 1, a, b, sum = 0;

  scanf("%d", &testcases);

  while(testcases--){
    sum = 0;
    scanf("%d %d", &a, &b);
    
    for(int i = 1; i < 32 ; i++){
      if( a <= i*i && i*i <= b) sum += i*i;
      if( b < i*i) break;
    }

    printf("Case %d: %d\n", caseNumber++, sum);

  }

}