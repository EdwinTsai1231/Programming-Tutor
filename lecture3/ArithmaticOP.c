#include <stdio.h>

int main(void){
  
  /* divide operator */
  printf("\nDivide Operator:\n");
  int a = 5, b = 2;
  int c = a/b;
  printf("integer number: %d / %d = %d\n", a, b, c);

  double d = 5.0, e = 2.0;
  double f = d/e;
  printf("floating number: %lf / %lf = %lf\n", d, e, f);

  /* Warning!: only floating number has definition on devided by zero */
  double g = 5.0, h = 0.0;
  double i = g/h;
  printf("floating number: %lf / %lf = %lf\n", g, h, i);

  /* module operator */ 
  printf("\nModule Operator:\n");
  int j = 5, k = 2;
  int l = j%k;
  printf("integer number: %d %% %d = %d\n", j, k, l);

  int m = -5, n = 2;
  int o = m%n;
  printf("integer number: %d %% %d = %d\n", m, n, o);
 
  int p = -5, q = 2;
  int r = (p%q+q)%q;
  printf("integer number: (%d %% %d + %d) %% %d = %d\n", p, q, q, q, r);


  


  return 0;
}
