//Q1: Write a function to calculate length of a string.
         //012345
    //char str[] = "ABCDE\0";
#include<stdio.h>
int getStringLength(char str[]){
    int i;
    for(i=0;str[i]!='\0';i++);//for(i=0;str[i]!=NULL;i++);
    return i;
}
int main(){
    char str[30];
    int l;
    printf("\n Enter a string:");
    gets(str);
    l = getStringLength(str);
    printf("\n Length of %s is %d",str,l);
    return 0;
}