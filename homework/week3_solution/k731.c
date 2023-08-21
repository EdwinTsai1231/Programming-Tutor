#include <stdio.h>

int main(){

    int n, old_x = 0, old_y = 0, new_x, new_y, dx, dy;
    int l_turn = 0, r_turn = 0, u_turn = 0;
    char dir = 'E';
    scanf("%d", &n);

    while(n--){
        scanf("%d %d", &new_x, &new_y);
        dx = new_x - old_x;
        dy = new_y - old_y;
        if(dir == 'E'){
            if(dx > 0) ;
            else if(dx < 0) u_turn++, dir = 'W';
            else if(dy > 0) l_turn++, dir = 'N';
            else if(dy < 0) r_turn++, dir = 'S';
        }else if(dir == 'N'){
            if(dx > 0) r_turn++, dir = 'E';
            else if(dx < 0) l_turn++, dir = 'W';
            else if(dy > 0) ;
            else if(dy < 0) u_turn++, dir = 'S';

        }else if(dir == 'W'){
            if(dx > 0) u_turn++, dir = 'E';
            else if(dx < 0) ;
            else if(dy > 0) r_turn++, dir = 'N';
            else if(dy < 0) l_turn++, dir = 'S';


        }else if(dir == 'S'){
            if(dx > 0) l_turn++, dir = 'E';
            else if(dx < 0) r_turn++, dir = 'W';
            else if(dy > 0) u_turn++, dir = 'N';
            else if(dy < 0) ;
        }
        old_x = new_x;
        old_y = new_y;
    }

    printf("%d %d %d", l_turn, r_turn, u_turn);



    return 0;
}