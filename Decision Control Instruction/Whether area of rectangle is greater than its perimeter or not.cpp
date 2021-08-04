/* Program to find whether the area of rectangle is greater than its perimeter */
#include<stdio.h>
int main()
{
	float l,b,ar,pr;
	printf("Enter length and breadth ");
	scanf("%f%f",&l,&b);
	ar=l*b;
	pr=2*(l+b);
	if(ar>pr)
		printf("Area of rectangle is greater than its perimeter");
	else
		printf("Area of rectangle is lesser than its perimeter");
	return 0;
}
/* OUTPUT:
Enter length and breadth 2 5
Area of rectangle is lesser than its perimeter */
