/* Program to reverse a 5 digit number */
#include<stdio.h>
int main()
{
	int n,d1,d2,d3,d4,d5,n2;
	printf("Enter five digit number : ");
	scanf("%ld",&n);
	d5=n%10;
	n=n/10;
	d4=n%10;
	n=n/10;
	d3=n%10;
	n=n/10;
	d2=n%10;
	n=n/10;
	d1=n%10;
	n2=d5*10000+d4*1000+d3*100+d2*10+d1;
	printf("Reverse of the five digit number = %ld",n2);
	return 0;
	
}
/* OUTPUT:
Enter five digit number : 12345
Reverse of the five digit number : 54321 */
