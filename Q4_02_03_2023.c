/*6. Write a program to compare two dates entered by user. Make a structure named Date to store 
the elements day, month and year to store the dates. If the dates are equal, display "Dates are 
equal" otherwise display "Dates are not equal".*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct date
{
 int day;
 int month;
 int year;
};

int main ()
{
	struct date d[2];
	int f=0,i;
  	for(i=0;i<2;i++)
 	{
  		printf("\n Enter date %d in dd mm yyyy format:",i+1);
  		scanf("%d%d%d",&d[i].day,&d[i].month,&d[i].year);
 	}
 	if(d[0].day==d[1].day)
 	{
  		if(d[0].month==d[1].month)
  		{
   			if(d[0].year==d[1].year)
   			{
    			f=1;
   			}
  		}
 	}
 	if(f==1)
  		printf("\nThe dates are equal");
 	else
  		printf("\nThe dates are not equal");
 	
	return 0;
}