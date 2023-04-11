//16. C program to check whether a number is Armstrong number or not 153 = 1^3+5^3+3^3 = 1+125+27
#include<stdio.h>
int countDigit(int n){
	int count=0;
	while(n>0){
		count++;
		n = n/10;
	}
	return count;
}

int power(int x, int y){
	int i,p=1;
	for(i=1;i<=y;i++){
		p = p*x;
	}
	return p;
}

int checkArmstrong(int n){
	int nod,m,d,s=0;
	m = n;
	nod = countDigit(n);
	while(m>0){
		d = m%10;
		s = s + power(d,nod);
		m = m/10;
	}
	return n == s;
}
/*m=153, nod=3, d=3, s = 0 + 3^3=27
m=15, d=5, s = 27 + 5^3 = 27+125=152
m=1, d=1, s = 152+1^3=153
m=0*/

int main() {
	int n;
	printf("\n Enter a number:"); 
	scanf("%d",&n);
	if(checkArmstrong(n)==1){
		printf("\n %d is an Armstrong number: ",n);
	}
	else {
		printf("\n %d is not an Armstrong number: ",n);
	}
	return 0;
}