//Write a c program to display the details of the student who
//have sored the highest total.
//The structre of the student is
#include<stdio.h>
struct student {
	int rollno;
	char name [30];
	float marks;
};

int main(){
	int n,i;
	printf("\n Enter how many students : ");
	scanf("%d",&n);
	struct student s[n];
	for(i=0;i<n;i++){
		printf("\n Enter Roll no :");
		scanf("%d",&s[i].rollno);
		printf("\n Enter student name :");
		fflush(stdin);
		gets(s[i].name);
		printf("\n Enter marks :");
		scanf("%f",&s[i].marks);
	}
	
	int max = s[0].marks;
	int l=0; 
		for(i=1;i<n;i++){
			if(s[i].marks > max){
			max = s[i].marks;
			l = i;
		}
	}
	printf("\n Details of highest scorer:");
	printf("\n Roll Number = %d",s[l].rollno);
	printf("\n Name = %s",s[l].name);
	printf("\n Marks = %.2f",s[l].marks);
	return 0;
}