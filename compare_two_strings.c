//Q4: Write a function to compare two strings.
        //01234
//str1[] = "AMIT\0"
        //  0123456
//str2[] = "AMITAV\0"
#include<stdio.h>
int main(){
	char str1[30], str2[30];
	int i,n,f=0;
	printf("\n Enter string 1:");
	gets(str1);

	printf("\n Enter string 2:");
	fflush(stdin);//clearing the input buffer
	gets(str2);

	for(i=0; str1[i]!=NULL && str2[i]!=NULL;i++){
		n = str1[i] - str2[i];
		if(n > 0){
			printf("str1 is greater than str2");
			f=1;
			break;
		}
		else if(n<0){
			printf("\n str2 is greater than str1");
			f=1;
			break;
		}
	}
	if(f==0){
		if(str1[i]!=NULL)
			printf("str1 is greater than str2");
		else if(str2[i]!=NULL)
			printf("\n str2 is greater than str1");
		else
			printf("\n Strings are equal");
	}
}