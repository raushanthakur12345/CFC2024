//Write a C program to calculate factorial of an integer taking input from
//command line argument.Also valide the data that only integer type value is
//valid 
#include<stdio.h>
#include<stdlib.h>
int validateData(char str[]){
    int i;
    for(i=0;str[i];i++){
        if(str[i] < '0' || str[i] > '9'){
            return 0;
        }
    }
    return 1;
} 

int factorial(int n){
    int fact = 1,i;
    for(i=1;i<=n;i++){
        fact = fact*i;
    }
    return fact; 
}

int main(int argc, char*argv[]){
    int f,i,n;
    if(argc!=2){
        printf("\n Error");
        exit(0);
    }
    if(validateData(argv[1]) == 0)
    {
        printf("\n Error");
        exit(0);
    }
    n=atoi(argv[1]);
    f = factorial(n);
    printf("\n factorial of the %d number is %d",n,f);
    return 0;
}