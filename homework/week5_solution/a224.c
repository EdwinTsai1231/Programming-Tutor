#include <stdio.h>
#define MAX 1000

int main(){
  char string[MAX];
  int alphabet[26];
  int odd_flag = 0;

  
  while(scanf("%s", string) != EOF){
    odd_flag = 0;
    for(int i = 0 ; i < 26 ; i++)
      alphabet[i] = 0;

    for(int i = 0 ; string[i] != '\0' ; i++){
      if('A' <= string[i] && string[i] <= 'Z') string[i] = string[i] - 'A' + 'a';

      if(string[i] < 'a' || string[i] > 'z') continue;
      
      alphabet[string[i] - 'a']++;
    }

    for(int i = 0 ; i < 26 ; i++){
      if(alphabet[i] % 2 == 0){
        continue;
      }else{
        if(odd_flag == 0){
          odd_flag = 1;
        }else{
          odd_flag = 2;
          break;
        }
      }
    }
    if(odd_flag == 2) printf("no...\n");
    else printf("yes !\n");
  }
  

  return 0;
}
