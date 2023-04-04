#include<stdio.h>
#include<stdlib.h>
int add(int A, int B) {
	return (A+B);
}

int main() {
	int A,B,T;
	scanf("%d",&T);
	if(T<1 || T>1000){
		printf("\n Error");
		exit(0);
	}
	int result[T];
	for(int i=0;i<T;i++){
		scanf("%d%d",&A,&B);
		if((A<1 || A>10000) || (B<1 || B>10000)){
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