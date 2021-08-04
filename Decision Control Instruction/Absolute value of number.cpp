/* Program to find absolute value of a number */
#include<stdio.h>
int main()
{
	int n;
	printf("Enter any number : ");
	scanf("%d",&n);
	if(n<0)
		n*=-1;
	printf("Absolute value of given number is %d",n);
	return 0;
 } 
 /* OUTPUT:
 Enter any number : -12
 Absolute value of given  number is 12 */
