//1. Write two functions to get Maximum and minimum numbers from a list of numbers (Array).
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

int getMax(int a[], int n){
	int i, max = a[0];
	for(i=1;i<n;i++){
		if(a[i] > max){
			max = a[i];
		}
	}
	return max;
}

int getMin(int a[], int n){
	int i, min = a[0];
	for(i=1;i<n;i++){
		if(a[i] < min){
			min = a[i];
		}
	}
	return min;
}

int main(){
	int n;
	printf("\n Enter the size of the array:");
	scanf("%d",&n);
	int a[n];
	inputArray(a,n);
	printArray(a,n);
	printf("\n Maximum Number = %d",getMax(a,n));
	printf("\n Minimum Number = %d",getMin(a,n));
	return 0;
}