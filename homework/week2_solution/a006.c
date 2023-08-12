#include <stdio.h>
#include <math.h>

int main(){
    
    double a, b, c, d;
    scanf("%lf %lf %lf", &a, &b, &c);
    d = pow(b, 2) - 4 * a * c;
    if(d > 0){
        int x1, x2;
        x1 = (int)(-b + sqrt(d)) / (2*a);
        x2 = (int)(-b - sqrt(d)) / (2*a); 
        printf("Two different roots x1=%d , x2=%d", x1, x2);
    }else if(d == 0){
        int x;
        x = (int)(-b) / (2*a);
        printf("Two same roots x=%d", x);
    }else{
        printf("No real root");
    }

    return 0;
}

