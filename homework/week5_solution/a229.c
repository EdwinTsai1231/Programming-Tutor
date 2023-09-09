#include <stdio.h>

void recursion();

int left = 0, right = 0, idx = 0, n;
char res[14];

int main(){

    while(scanf("%d", &n) != EOF){
        for(int i = 0 ; i < 14 ; i++) res[i] = '\0';
        left = 0, right = 0, idx = 0;
        recursion();
        printf("\n");
    }

    return 0;
}

void recursion(){
    if(left == n && right == n){
        printf("%s\n", res);
        return;
    }

    if(left < n){
        res[idx++] = '(';
        left++;
        recursion();
        idx--;
        left--;
    }
    
    if(right < n && right < left){
        res[idx++] = ')';
        right++;
        recursion();
        idx--;
        right--;
    }

}