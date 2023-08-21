#include <stdio.h>

int main(){

    int n, res;
    while(scanf("%d", &n) != EOF){
        res = 0;
        while(1){
            if(n/5 == 0) break;
            else res += n/5;
            n /= 5;
        }
        printf("%d\n", res);
    }
    return 0;
}