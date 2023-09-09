#include <stdio.h>
#include "./my_math.h"

#define begin {
#define end }

#define PI 3.14

#define GREETING "good morning!"

#define STRING "We can use backslash \"\\\" \
to change the line in #define"

#define SQUARE(X) (X)*(X)


int main(void)
  begin

    printf("%f\n", PI);
    printf("%s\n", GREETING);
    printf("%s\n", STRING);

    int n = 4;
    printf("%d\n", SQUARE(n+1));
    printf("%d\n", ADD(5, 10+2));

    return 0;

  end
