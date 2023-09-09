#include <stdio.h>

int gcd_v1(int a, int b){
  while(a != 0 && b != 0){
    if(a>=b){
      a = a%b;
    }else{
      b = b%a;
    }
  }

  if(a > 0) return a;
  else return b;
}

int gcd_v2(int a, int b){
  
  int t;
  while(b!=0){
    t = b;
    b = a%b;
    a = t; 
  }

  return a;
}

int gcd_v3(int a, int b){
  if(b == 0)
    return a;
  return gcd_v3(b, a%b);
}

int gcd_one_line(int a, int b){
  return b == 0 ? a : gcd_one_line(b, a%b);
}

int main(){
  int a, b;
  scanf("%d %d", &a, &b);
  printf("gcd_v1(a, b): %d\n", gcd_v1(a, b));
  printf("gcd_v2(a, b): %d\n", gcd_v2(a, b));
  printf("gcd_v3(a, b): %d\n", gcd_v3(a, b));
  printf("gcd_one_line(a, b): %d\n", gcd_one_line(a, b));


}
