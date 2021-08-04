/* Program to check whether a triangle is valid or not */
#include<stdio.h>
int main()
{
	float a,b,c;
	printf("Enter the angles of triangle ");
	scanf("%f%f%f",&a,&b,&c);
	if(a+b+c==180)
	printf("Triangle is valid");
	else
	printf("Triangle is not valid");
	return 0;
}
/* OUTPUT:
Enter the angles of triangle 30 60 90
triangle is valid */
