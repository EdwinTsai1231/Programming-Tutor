#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    int a, b, c, d, e;
    while(t--){
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if(b-a == d-c) e = d + (b-a);
        else e = d * (b/a);
        printf("%d %d %d %d %d\n", a, b, c, d, e);
    }

    return 0;
}