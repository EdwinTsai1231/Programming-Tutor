#include <stdio.h>

void merge(int nums[], int l, int m, int r){
  int left_len = m - l, right_len = r - m;
  int left_nums[left_len], right_num[right_len];

  for(int i = 0 ; i < left_len ; i++)
    left_nums[i] = nums[l+i];

  for(int i = 0 ; i < right_len ; i++)
    right_num[i] = nums[m+i];

  int idx = l, left_idx = 0, right_idx = 0;
  while(left_idx < left_len && right_idx < right_len){
    if(left_nums[left_idx] < right_num[right_idx])
      nums[idx++] = left_nums[left_idx++];
    else
      nums[idx++] = right_num[right_idx++];
  }

  while(left_idx < left_len)
    nums[idx++] = left_nums[left_idx++];

  while(right_idx < right_len)
    nums[idx++] = right_num[right_idx++];


}

void merge_sort(int nums[], int l, int r){
  if(l+1 == r) return;

  int m = l + (r-l) / 2;
  merge_sort(nums, l, m);
  merge_sort(nums, m, r);
  merge(nums, l, m, r);

}

int main(){

  int n;
  while(scanf("%d", &n) != EOF){
    int nums[n];
    for(int i = 0 ; i < n ; i++)
      scanf("%d", &nums[i]);

    merge_sort(nums, 0, n);

    for(int i = 0 ; i < n ; i++)
      printf("%d ", nums[i]);
    printf("\n");
  }

  return 0;
}
