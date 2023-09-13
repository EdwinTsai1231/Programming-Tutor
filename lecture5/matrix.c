#include <stdio.h>
#define MAXROW 100
#define MAXCOL 100

void add(int matrix1[][MAXCOL], int row1, int col1,
    int matrix2[][MAXCOL], int row2, int col2);

int main(){
  
  int matrix1[MAXROW][MAXCOL] = {{1, 2, 3},
                                 {2, 6, 2},
                                 {9, 1, 3}};
  int matrix2[MAXROW][MAXCOL] = {{1, 7, 21},
                                 {8, 2, 45},
                                 {9, 1, 3}};

  add(matrix1, 3, 3, matrix2, 3, 3);

}

void add(int matrix1[][MAXCOL], int row1, int col1,
    int matrix2[][MAXCOL], int row2, int col2){

  int matrix3[MAXROW][MAXCOL];
  for(int i = 0 ; i < row1 ; i++){
    for(int j = 0 ; j < col1 ; j++){
      matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
    }
  }

  for(int i = 0 ; i < row1 ; i++){
    for(int j = 0 ; j < col1 ; j++){
      printf("%3d ", matrix3[i][j]);
    }
    printf("\n");
  }

}
