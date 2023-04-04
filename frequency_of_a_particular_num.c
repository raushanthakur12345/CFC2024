//Q: Write a c program to calculate frequency of a particular number:
#include<stdio.h>
int main(){
    int n,i,count=0,x;
    printf("\n Enter the size of the array:");
    scanf("%d",&n);
    int a[n];
    printf("\n Enter %d element",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\n Enter a number:");
    scanf("%d",&x);
    for(i=0;i<n;i++){
        if(a[i]==x){
            count++;
        }
    }
    printf("\n Frequency of %d is %d",x,count);
    return 0;
}