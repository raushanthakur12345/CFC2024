#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char str[40],ch;
	int i,l,flag=0,count=0;
	printf("\n Enter a string:");
	gets(str);
	printf("\n Enter a character:"); 
	fflush(stdin);
	ch = getche();
	for(i=0;str[i]!='\0';i++){
		if(str[i] == ch){
			count++;
			flag=1;
			break;
		}
	}
	if(flag==0){
		printf("\n There is no occurance of %c in %s",ch,str);
		exit(0);
	}
	printf("\n %c occurance is %d",ch,count);
	
	
	return 0;
}