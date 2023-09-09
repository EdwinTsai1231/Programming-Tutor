#include <stdio.h>
#include <stdbool.h>

int recursion(bool bigger, int *nums, int left, int right){
    if(left + 1 == right) return nums[left];

    int left_num, right_num, size;
    size = right - left;
    left_num = recursion(!bigger, nums, left, right - size/2);
    right_num = recursion(!bigger, nums, left + size/2, right);

    if(bigger) return left_num > right_num ? left_num : right_num;
    else return left_num > right_num ? right_num : left_num;

}


int main(){

    int N;
    scanf("%d", &N);
    int nums[N];

    for(int i = 0 ; i < N ; i++) scanf("%d", &nums[i]);

    int res = recursion(true, nums, 0, N); // [left, right)

    printf("%d", res);


    return 0;
}
