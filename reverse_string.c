//Q5: Write a function to reverse a string:
#include<stdio.h>
void reverseString(char str[]){
    int i,l;
    char ch;
    l = strlen(str);
    for(i=0;i<l/2;i++){
        ch = str[i];
        str[i] = str[l-i-1];
        str[l-i-1]=ch;
    }
}
int main(){
    char str[30];
    printf("\n Enter a string:");
    gets(str);
    reverseString(str);
    printf("\n Reverse string is %s",str);
    return 0;
}