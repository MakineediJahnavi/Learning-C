/* Program to obtain the reverse number and to determine whether the original and reversed numbers are equal or not */
#include<stdio.h>
int main()
{
	int n,rev,d1,d2,d3,d4,d5,num;
	printf("Enter a five digit number : ");
	scanf("%ld",&num);
	n=num;
	d5=n%10;
	n=n/10;
	d4=n%10;
	n=n/10;
	d3=n%10;
	n=n/10;
	d2=n%10;
	n=n/10;
	d1=n;
	rev=d5*10000+d4*1000+d3*100+d2*10+d1;
	printf("Reversed number = %ld\n",rev);
	if(num==rev)
	printf("Original and reversed numbers are equal");
	else
	printf("Original and reversed numbers are not equal");
	return 0;
}
/* OUTPUT:
Enter a five digit number : 11111
Reversed number = 11111
Original and reversed numbers are equal */
