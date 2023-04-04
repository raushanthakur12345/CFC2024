//Write a C program to calculate average of n elements stored in an Array.
#include<stdio.h>
int main(){
    int n,i;
    printf("\n Enter the size of the array:");
    scanf("%d",&n);
    float a[n],s=0;
    printf("\n Enter %d elements",n);
    for(i=0;i<n;i++){
        scanf("%f",&a[i]);
    }
    for(i=0;i<n;i++){
        s = s + a[i];
    }
    float avg = s/n;
    printf("\n Average = %f",avg);
    return 0;
}