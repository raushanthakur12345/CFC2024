//Write a c program to add two numbers taking input from the command line
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
	int x, y, s;
	x = atoi(argv[1]); 
	y = atoi(argv[2]);
	s = x + y;
	printf("\n Sum = %d",s);
	return 0;
}