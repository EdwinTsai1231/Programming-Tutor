#include <stdio.h>
#define ROW 3
#define COL 3


int main(){
  
  int nums[ROW][COL] = {{12, 42, 33},
                        {65, 34, 98},
                        {49, 3, 9}};
  
  int *ptr = &nums[0][0];

  printf("%d", *(ptr+1000%(ROW*COL)));
  
  // for(int i = 0 ; i < ROW * COL ; i++, ptr++)
  //   printf("val: %3d, address: %p\n", *ptr, ptr);

  return 0;
}
