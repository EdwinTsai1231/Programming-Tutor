#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void recursion(char arr[][MAX], int n, int curr_x, int curr_y){
  if(curr_x < 0 || curr_x >= n || curr_y < 0 || curr_y >= n || arr[curr_x][curr_y] == '+') return;
  arr[curr_x][curr_y] = '+';
  recursion(arr, n, curr_x+1, curr_y);
  recursion(arr, n, curr_x-1, curr_y);
  recursion(arr, n, curr_x, curr_y+1);
  recursion(arr, n, curr_x, curr_y-1);
}

int main(){

 
  int n;
  scanf("%d", &n);
  char arr[MAX][MAX];

  char temp;
  scanf("%c", &temp);
  for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < n ; j++){
      scanf("%c", &arr[i][j]);
    }
    scanf("%c", &temp);
  }

  int curr_x, curr_y;
  scanf("%d %d", &curr_x, &curr_y);

  recursion(arr, n, curr_x, curr_y);

  for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < n ; j++){
      printf("%c", arr[i][j]);
    }
    printf("\n");
  }
    


  return 0;
}
