//Q3:Write a function to concate two strings.
        // 012345678
//str1[] = "AMIT DAS\0"
        //  0123
//str2[] = "DAS\0"
#include<stdio.h>
int main(){
    char str1[30],str2[30];
    int i,j;
    printf("\n Enter string 1:");
    gets(str1);

    printf("\n Enter string 2:");
    fflush(stdin);
    gets(str2);

    for(i=0;str1[i]!=NULL;i++);
    str1[i++]=" ";
    
    for(j=0;str2[j]!=NULL;j++){
        str1[i++] = str2[j];
    }
    str1[i] = NULL;

    printf("\n Concatenated string is %s",str1);
    return 0;
}