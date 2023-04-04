//Write a C program to calculate factorial of an integer number taking input from the command line.
#include <stdio.h>
#include<stdlib.h>
int main(int argc,char*argv[])
{
  int fact=1,i,n;
  n=atoi(argv[1]);
  for(i=0;i<=n;i++)
  {
    fact=fact*i;
  }
  printf("\n factorial of the %d number is %d",n,fact);
  return 0;
}