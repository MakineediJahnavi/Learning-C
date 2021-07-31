/* Program to calculate sum of the digits in a number */
#include<stdio.h>
int main()
{
	int n,d1,d2,d3,d4,d5,sum;
	printf("Enter the five-digit number : ");
	scanf("%d",&n);
	d5=n%10;
	n=n/10;
	d4=n%10;
	n=n/10;
	d3=n%10;
	n=n/10;
	d2=n%10;
	n=n/10;
	d1=n;
	sum=d1+d2+d3+d4+d5;
	printf("Sum of the digits in the number = %d",sum);
	return 0;
}
/* OUTPUT:
Enter the five-digit number : 12345;
Sum of the digits in the number = 15 */
