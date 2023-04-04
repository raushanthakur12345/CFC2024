#include<stdio.h>
#include<stdlib.h>
int add(int A, int B) {
	return (A+B);
}

int isValidData(char str[]){
	for(int i=0;str[i]!='\0';i++){
		if(str[i] < '0' || str[i]>'9')
		{
			return 0;
		}
	}
	return 1;
}

int main() {
	int A,B,T;
	char sT[5];
	scanf("%s",sT);
	if(isValidData(sT) == 0){
		printf("\n Error");
		exit(0);
	}
	T = atoi(sT);
	if(T<1 || T>1000){
		printf("\n Error");
		exit(0);
	}
	int result[T];
	for(int i=0;i<T;i++){
		scanf("%d%d",&A,&B);
		char sA[5],sB[5];
		scanf("%s%s",sA,sB);
		if(isValidData(sA) == 0 || isValidData(sB) == 0 ) 
		{
			printf("\n Error");
			exit(0);
		}
		A = atoi(sA);
		B = atoi(sB);
	
		if((A<1 || A>10000) || (B<1 || B>10000))
		{
			printf("\n Error");
			exit(0);
		}
		result[i] = add(A,B);
	}
	for(int i=0;i<T;i++){
		printf("\n %d",result[i]);
	}
	return 0;
}