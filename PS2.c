#include<stdio.h>
int main() {
	int X;
	float Y;
	scanf("%d %f",&X,&Y);
	if(X<=0 || X>2000 || Y<0 || Y>2000){
		printf("\n Error");
		exit(0);
	}
	if(X%5 == 0 && Y >= X+0.5 ){
		Y = Y - X - 0.5;
	}
	else
		printf("\n %.2f",Y);
	return 0;
}