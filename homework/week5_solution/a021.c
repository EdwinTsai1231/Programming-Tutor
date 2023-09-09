#include <stdio.h>
#include <stdbool.h>

void bigNumAdd(int *num1, int num1_len, int *num2, int num2_len, int *res){
  int carry = 0, idx = 0, temp;
  for(idx = 0 ; idx < num1_len || idx < num2_len ; idx++){
    temp = carry + (idx < num1_len ? num1[idx] : 0) + 
      (idx  < num2_len ? num2[idx] : 0);
    carry = temp / 10;
    res[idx] = temp % 10;
  }

  if(carry) res[idx] = 1;
}

int subCompare(int *num1, int num1_len, int *num2, int num2_len){
  while(num1[num1_len-1] == 0) num1_len--;
  if(num1_len > num2_len) return 1;
  else if(num2_len > num1_len) return -1;
  else{
    for(int i = num1_len-1 ; i >= 0 ; i--){
      //printf("%d %d\n", num1[i], num2[i]);
      if(num1[i] > num2[i]) return 1;
      else if(num2[i] > num1[i]) return -1;
    }
  }
  return 0;
}

void bigNumSub(int *num1, int num1_len, int *num2, int num2_len, int *res){
  bool isNegative = false;
  if(subCompare(num1, num1_len, num2, num2_len) == -1){
    int *temp_p = num1;
    num1 = num2;
    num2 = temp_p;

    int temp_len = num1_len;
    num1_len = num2_len;
    num2_len = temp_len;
    isNegative = true;
  }else if(subCompare(num1, num1_len, num2, num2_len) == 0){
    res[0] = 0;
    return;
  }

  int borrow = 0, idx = 0, temp;
  for(idx = 0 ; idx < num1_len || idx < num2_len ; idx++){
    temp = (idx < num1_len ? num1[idx] : 0) - 
      (idx  < num2_len ? num2[idx] : 0) - borrow;
    if(temp < 0){
      temp += 10;
      borrow = 1;
    }else{
      borrow = 0;
    }
    res[idx] = temp;
  }

  for(int i = 499 ; i >= 0 ; i--){
    if(res[i] == 0){
      res[i] = -1;
    }else if( 1 <= res[i] && res[i] <= 9){
      if(isNegative) res[i+1] = -2;
      break;
    }
  }

}

void bigNumMul(int *num1, int num1_len, int *num2, int num2_len, int *res){
  int temp, carry = 0; 
  for(int i = 0 ; i < num2_len ; i++){
    carry = 0;
    for(int j = 0 ; j < num1_len ; j++){
      temp = carry + num2[i] * num1[j];
      carry = temp / 10;
      if(res[i+j] == -1) res[i+j] = 0;
      res[i+j] += temp % 10;
    }
    if(carry > 0){
      if(res[num1_len + i] == -1) res[num1_len + i] = 0;
      res[num1_len + i] += carry;
    }
  }
  if(carry > 0){
    if(res[num1_len + num2_len - 1] == -1) res[num1_len + num2_len - 1] = 0;
    res[num1_len + num2_len - 1] += carry;
  }

  carry = 0;
  for(int i = 0 ; i < 500 ; i++){
    if(carry == 0 && res[i] == -1) break;
    if(res[i] == -1) res[i] = 0;
    temp = carry + res[i];
    carry = temp / 10;
    res[i] = temp % 10;
  }
   
}

void bigNumDiv(int *num1, int num1_len, int *num2, int num2_len, int *res){
  if(num1_len < num2_len){
    res[0] = 0;
    return ;
  }
  int res_len = num1_len - num2_len +1;
  
  int skip = 0;
  //printf("%d", subCompare(num1+1, num2_len, num2, num2_len) );
  
  for(int i = res_len-1 ; i >= 0 ; i--){
    //printf("%d\n", subCompare(num1+i, num2_len+skip, num2, num2_len));
    /*
    for(int i = 499 ; i >= 0 ; i--){
      if(num1[i] == -2) printf("%c", '-');
      else if(num1[i] != -1) printf("%d", num1[i]);
    }
    printf("\n");
    */

    if(subCompare(num1+i, num2_len+skip, num2, num2_len) >= 0){
      int times = 0;
      while(subCompare(num1+i, num2_len+skip, num2, num2_len) >= 0){
        int borrow = 0;
        for(int j = 0 ; j < num2_len+skip || j < num2_len ; j++){
          num1[i+j] = ( j < num2_len + skip ? num1[i+j] : 0 ) - ( j < num2_len ? num2[j] : 0) - borrow;
          if(num1[i+j] < 0){
            borrow++;
            num1[i+j] += 10;
          }else{
            borrow = 0;
          }
        }
        times++;

      }
      res[i] = times;
      skip = 0;
    }else{
      //printf("hello");
      skip++;
      res[i] = 0;
    }

  }
  


}

int main(){

  int num1[500], num2[500], res[500];
  char buffer[500] = "\0", ch;
  for(int i = 0 ; i < 500 ; i++){
      num1[i] = num2[i] = res[i] = -1;
      buffer[i] = '\0';
  }
  int num1_len, num2_len;

  num1_len = num2_len = 0;
  scanf("%s ", buffer);
  for(int i = 0 ; buffer[i] != '\0' ; i++) num1_len++;
  for(int i = 0 ; i < num1_len ; i++){
    num1[i] = buffer[num1_len - 1 -i] - '0';
    buffer[num1_len - 1 - i] = '\0';
  }
  scanf("%c", &ch);
  
  scanf(" %s", buffer);
  for(int i = 0 ; buffer[i] != '\0' ; i++) num2_len++;
  for(int i = 0 ; i < num2_len ; i++){
    num2[i] = buffer[num2_len - 1 -i] - '0';
    buffer[num2_len - 1 - i] = '\0';
  }

  if(ch == '+') bigNumAdd(num1, num1_len, num2, num2_len, res);
  else if(ch == '-') bigNumSub(num1, num1_len, num2, num2_len, res);
  else if(ch == '*') bigNumMul(num1, num1_len, num2, num2_len, res);
  else if(ch == '/') bigNumDiv(num1, num1_len, num2, num2_len, res);

  for(int i = 499 ; i >= 0 ; i--){
    if(res[i] == -2) printf("%c", '-');
    else if(res[i] != -1) printf("%d", res[i]);
  }

  return 0;
}
