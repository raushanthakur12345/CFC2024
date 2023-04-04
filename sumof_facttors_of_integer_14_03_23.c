/*1. with return type and with argument list
   int calFactorial(int);
*/
#include<stdio.h>
                      
int calFactorial1(int x){ // x is called formal argument / parameter
	int i,f=1;
	for(i=1;i<=x;i++){
		f = f * i;
	}
	return f;
}

int main(){
	int n,fact;
	printf("\n Enter a number:");
	scanf("%d",&n); 
	fact = calFactorial1(n); // n is called actual argument / function calling
	printf("\n Factorial = %d",fact);
	return 0;
}
