/*
a. strlen() -> to get length of a string.
b. strcpy() -> to copy a string to another string
c. strcat() -> to concate two strings
d. strcmp() -> to compare two strings
e. strrev() -> to reverse a string.
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char str1[20], str2[20], ch;
	int l, x, n;
	while(1){
		printf("\n Press 1 to calculate length of a string:");
		printf("\n Press 2 to copy a string in another string");
		printf("\n Press 3 to concate two strings");
		printf("\n Press 4 to compare two strings");
		printf("\n Press 5 to reverse a string");
		printf("\n Press 6 to exit");
		scanf("%d",&x);
		switch(x){
			case 1:
					printf("\n Enter a string:");
					fflush(stdin);
					gets(str1);
					l = strlen(str1);
					printf("\n Length of %s is %d",str1,l);
					break;
			case 2:
					printf("\n Enter a string:");
					fflush(stdin);
					gets(str1);
					strcpy(str2,str1);
					printf("\n Copied string is %s", str2);
					break;
			case 3:
					printf("\n Enter string 1:");
					fflush(stdin);
					gets(str1);
					printf("\n Enter string 2:");
					fflush(stdin);
					gets(str2);
					strcat(str1, " ");
					strcat(str1,str2);
					printf("\n Concated string is %s",str1);
					break;
			case 4:
					printf("\n Enter string 1:");
					fflush(stdin);
					gets(str1);
					printf("\n Enter string 2:");
					fflush(stdin);
					gets(str2);
					n = strcmp(str1,str2);
					if(n == 0)
						printf("\n %s and %s are equal", str1,str2);
					else if(n>0)
						printf("\n %s is greater than %s ", str1,str2);
					else
						printf("\n %s greater than %s ", str2,str1);
					break;
			case 5:
					printf("\n Enter a string:");
					fflush(stdin);
					gets(str1);
					strrev(str1);
					printf("\n Reverse string is %s",str1);
					break;
			case 6:
					exit(0);
				
		}
	}
}