#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define MAXROW 10
#define MAXCOL 100

int main(){
  int A[MAXROW][MAXCOL], B[MAXROW][MAXCOL];
  int s, t, n, m, r, sum_A = 0, sum_B = 0;
  scanf("%d%d%d%d%d", &s, &t, &n, &m, &r);

  for(int i = 0 ; i < s ; i++){
    for(int j = 0 ; j < t ; j++){
      scanf("%d", &A[i][j]);
      sum_A += A[i][j];
    }
  }

  for(int i = 0 ; i < n ; i++)
    for(int j = 0 ; j < m ; j++)
      scanf("%d", &B[i][j]);

  int count = 0, diff = 0, min = INT_MAX;
  for(int i = 0 ; i < n-s+1 ; i++){
    for(int j = 0 ; j < m-t+1 ; j++){
      diff = 0, sum_B = 0;

      for(int a = 0 ; a < s ; a++){
        for(int b = 0 ; b < t ; b++){
          if(A[a][b] != B[i+a][j+b]) diff++;
          sum_B += B[i+a][j+b];
        }
      }

      if(diff > r) continue;
      count++;
      if(abs(sum_A - sum_B) < min) min = abs(sum_A - sum_B);
    }
  }

  printf("%d\n%d", count, count == 0 ? -1 : min);

  return 0;
}
