//2. C program to find all prime factors of a given number
#include <stdio.h> 
int isPrime(int n) {
	int i;
	for (i = 2; i*i <= n; i++) {
      	if (n % i == 0) {
         	return 0;
      	}
  	}
	return 1;
}

void displayPrimeFactors(int n){
    int i;
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            if(isPrime(i) == 1){
                printf("%d ", i);
            }
        }
    }
}

int main(){
    int n;
    printf("Enter the number :");
    scanf("%d", &n);
    displayPrimeFactors(n);
    return 0;
}