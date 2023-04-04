//Write a C program to check whether a number is prime-fibonacci terms
#include <stdio.h>

int checkFibonacci(int n) {
	int a=0,b=1,c=1;
	while(1){
		if(c == n)
			return 1;
		else if(c>n)
			return 0;
		else {
			a = b;
			b = c;
			c = a + b;
		}
	}
}

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
    if(checkPrime(n) == 1 && checkFibonacci(n) == 1) {
        printf("\n %d is a prime Fibonacci term", n);
    } 
	else {
        printf("\n %d is not a prime Fibonacci term", n);
    }
    return 0;
}