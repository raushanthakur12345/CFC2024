//Write a C program to calculate GCD of two integer numbers taking 
//input from command line arguments. Also validate the data that only 
//integer type value is valid.
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

int gcd(int a, int b){
	if(a%b == 0)
		return b;
	else	
		return gcd(b,a%b);
}
int main(int argc,char*argv[]){
	int g, x, y;
	if(argc != 3){
		printf("\n Error");
		exit(0);
	}
	if(validateData(argv[1]) == 0 || validateData(argv[2]) == 0){
		printf("\n Error");
		exit(0);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	g = gcd(x,y);
	printf("\n GCD of %d & %d is %d",x,y,g);
	return 0;
}
