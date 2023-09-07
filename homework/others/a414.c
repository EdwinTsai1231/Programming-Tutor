#include <stdio.h>

int main(){
    int N, count = 0;

    while(1){
        scanf("%d", &N);
        if(N == 0) break;
        count = 0;
        while(N%2 == 1){
            count ++;
            N /= 2;
        }

        printf("%d\n", count);
    }

    return 0;
}