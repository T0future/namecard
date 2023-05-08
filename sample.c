#include <stdio.h>
int calculation(int apple, int orange);
int main (void){
    calculation(2 , 3);
    return 0;
}

int calculation(int apple, int orange){
    printf("%d", (apple * 300)+(orange * 200) );
    return 0;
}