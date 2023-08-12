#include <stdio.h>

int main(){

    int t, num, a = 0, b = 0, c = 0;
    scanf("%d", &t);
    while(t--){
        
        scanf("%d", &num);

        if(num % 3 == 0) a++;
        else if(num % 3 == 1) b++;
        else c++;

    }
    printf("%d %d %d", a, b, c);

    return 0;
}