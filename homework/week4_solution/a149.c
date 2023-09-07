#include <stdio.h>

int main(){

    int t, num, res = 0;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &num);
        
        if(num == 0) res = 0;
        else res = 1;

        while(num){
            res *= num%10;
            num /= 10;
        }

        printf("%d\n", res);
    }

    return 0;
}