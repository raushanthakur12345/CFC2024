// Write a C program to display non-fibonacci terms within a given range 
#include<stdio.h>
int fibo(int n){
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return fibo(n-1)+fibo(n-2);
}

int main(){
    int n, nt=0,flag=0,i,j;
    printf("\n Enter a number:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        if(fibo(i)<=n){
            a[i]=fibo(i);
            nt++;
        }
    }
    for(i=0;i<n;i++){
        flag-0;
        for(j=0;j<nt;j++){
            if(i == a[j]){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            printf("%d",i);
        }
    }
    return 0;
}