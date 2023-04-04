//Q1. Write a C program to search an element stored in a dynamic array.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,*array,i,num,flag=0; 
	printf("Enter size of the array: "); 
	scanf("%d",&n); 
	array=(int*)calloc(n, sizeof(int)); 
	printf("Enter the array: "); 
	for(i=0;i<n;i++)
	{ 
		scanf("%d",(array+i)); 
	}
	printf("Enter the element to be searched: ");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(*(array+i)==num)
		{
			flag=1;
			break;		
		}		
	}
	if(flag==1)
		printf("%d found at %d",num,i+1);
	else
		printf("Not Found!!");
	return 0;
}