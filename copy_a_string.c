//Q2: Write a function to copy a string to another string.
                //012345
    //str1[] = "ABCDE\0";
    //str1[] = "ABCDE\0";
#include<stdio.h>
int main(){
    char str1[30],str2[30];
    int i;
    printf("\n Enter a string to copy:");
    gets(str1);
    for(i=0;str1[i]!=NULL;i++){
        str2[i] = str1[i];
    }
    str2[i]='\0';
    printf("\n Copied string is %s",str2);
    return 0;      
}