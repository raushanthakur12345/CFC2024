//Q3. Write a c program to check the presence of number of alphabets, digits, or special character.
#include<stdio.h>
#include<conio.h>
int main(){
    char ch;
    int noa=0, nod=0,nosc=0;
    printf("\nEnter a characters : $ to terminate:");
    scanf("%s",&ch);
    while(1){
    	ch=getche();
    	if(ch == '$'){
    		break;
		}
    	if((ch>='A' && ch<= 'Z' )|| (ch>='a' && ch<= 'z')){
	    	noa++;
    	}
    	else if(ch>='0' && ch<='9'){
	    	nod++;
    	}
    	else {
        	nosc++;
    	}
	}
    printf("\n Number of alphabets = %d", noa);
    printf("\n Number of digits = %d",nod);
    printf("\n Number of special charaters = %d",nosc);
	return 0;
}