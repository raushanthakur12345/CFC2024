//a) Write a function to check whether a number is perfent number or not.
#include<stdio.h>
int calPerfectnumber(int n){
    int sum = 0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            sum = sum + i;
        }
    }
    return sum;
}
int main(){
    int n,s;
    printf("\n Ente a number:");
    scanf("%d",&n);
    s = calPerfectnumber(n);
    if(s==n){
        printf("\n %d is a Perfect number",n);
    }
    else {
        printf("\n %d is not a perfect number",n);
    }
    return 0;
}