//1. C program to whether a number is prime number or not
#include<stdio.h>
int checkPrime(int n) {
    for(int i=2;i*i<=n;i++){
    	if(n%i == 0)
    		return 0;
	}
    return 1;
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(checkPrime(n) == 1) {
        printf("\n %d is a prime ", n);
    } 
	else {
        printf("\n %d is not a prime ", n);
    }
    return 0;
}
