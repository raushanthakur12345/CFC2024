#include<stdio.h>
struct Book {
	int accno;
	char title[20];
	float price;
};

int main(){
	int n,i;
	printf("\n Enter how many books:");
	scanf("%d",&n);
	struct Book B[n];
	for(i=0;i<n;i++){
		printf("\n Enter details of Book: %d :",i+1);
		printf("\n Enter Accession Number:");
		scanf("%d",&B[i].accno);
		printf("\n Enter title of the Book:");
		fflush(stdin);//to clear the input buffer
		gets(B[i].title);
		printf("\n Enter price of the Book:");
		scanf("%f",&B[i].price);
	}
	printf("\n Book details are:");
	for(i=0;i<n;i++){
		printf("\n Accession Number: %d",B[i].accno);
		printf("\n Title of the Book: %s",B[i].title);
		printf("\n Price of the Book:%.2f",B[i].price);
	}
	return 0;
}