#include<stdio.h>
int main(){
    int n,i,countEven=0,countOdd=0;
    printf("\n Enter the size of the array:");
    scanf("%d",&n);
    int a[n];
    printf("\n Enter %d element",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]%2 == 0){
            countEven++;
        }
        else{
            countOdd++;
        }
    }
    printf("\n Enter of Even numbers = %d",countEven);
    printf("\n Enter of Odd numbers = %d",countOdd);
    return 0;
}