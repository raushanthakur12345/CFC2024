//Passing Array as a function argument
#include<stdio.h>

void inputArray(int a[], int n){
	int i;
	printf("\n Enter %d numbers:",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}

void printArray(int a[], int n){
	int i;
	printf("\n Array elements are:");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
int sumArray(int a[], int n){
	int i, s=0;
	for(i=0;i<n;i++){
		s = s + a[i];
	}
	return s;
}
int main(){
	int n;
	printf("\n Enter the size of the array:");
	scanf("%d",&n);
	int a[n];
	inputArray(a,n);
	printArray(a,n);
	printf("\n Sum of Array = %d",sumArray(a,n));
	return 0;
}