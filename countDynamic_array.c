//Q2. Write a C program to count number of occurances of a 
// particular number among list of numbers stored in a dynaic array.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,*array,i,num,count=0; 
	printf("Enter size of the array: "); 
	scanf("%d",&n); 
	array=(int*)calloc(n, sizeof(int)); 
	printf("Enter the array: "); 
	for(i=0;i<n;i++)
	{ 
		scanf("%d",(array+i)); 
	}
	printf("Enter the element to found its frequency: ");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(*(array+i)==num)
		{
			count++;
		}
	}
	printf("%d found %d times",num,count);
	return 0;
}