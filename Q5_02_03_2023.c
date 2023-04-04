//Write a C program to calculate average of 5 numbers taking input from the command line.
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char*argv[]){
	int avg,x,y,z,a,b,sum,i,n;
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	z = atoi(argv[3]);
	a = atoi(argv[4]);
	b = atoi(argv[5]);
	sum = x+y+z+a+b;
	avg = sum/5;
	printf("\n the avg is %d",avg);
	return 0;	
}