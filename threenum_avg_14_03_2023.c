/*Write functions for the following:
1. To calculate average of three numbers.
*/
#include<stdio.h>

void calAvarage3(){
    int x,y,z,avg;
    printf("\n Enter the numbers:");
    scanf("%d%d%d",&x,&y,&z);
    avg = (x+y+z)/3;
    printf("\n Avg = %d",avg);
}

int main(){
    calAvarage3();
    return 0;
}