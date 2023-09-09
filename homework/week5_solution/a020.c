#include <stdio.h>

int table[26] = {10, 11, 12, 13, 14, 15, 16, 17, 34, 18, 19, 20, 21, 22, 
                35, 23, 24, 25, 26, 27, 28, 29, 32, 30, 31, 33};

int main(){
    char id[11];
    scanf("%s", id);
    int sum = 0;

    sum += ( table[id[0] - 'A'] % 10 ) * 9 +  table[id[0] - 'A'] / 10 ;

    for(int i = 8, j = 1 ; i >= 0 ; i--, j++){
        if(i != 0) sum += i* (id[j] - '0') ; 
        else sum += (id[j] - '0') ; 
    }

    if(sum % 10 == 0) printf("real");
    else printf("fake");

    return 0;
}