//a) Write a function to check whether a number is strong number or not.
//b) Write a function to display all the strong numbers within a given range.

#include<stdio.h>

int factorial(int n){
	int i,f=1;
	for(i=1;i<=n;i++){
		f = f * i;
	}
	return f;
}

int isStrongNumber(int n){
	int m,s=0,d,f;
	m=n;
	while(n>0){
		d = n%10;
		f = factorial(d);
		s = s + f;
		n = n / 10;
	}
	return m == s;
}

int main(){
	int sr,er,n;
	printf("\n Enter starting and ending range:");
	scanf("%d%d",&sr,&er);
	printf("\n Strong Numbers between %d and %d are:",sr,er);
	for(n=sr;n<=er;n++){
		if(isStrongNumber(n)){
			printf("%d ",n);
		}
	}
	return 0;
}