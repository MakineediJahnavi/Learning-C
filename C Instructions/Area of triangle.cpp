/* Program to find area of triangle */
#include<stdio.h>
#include<math.h>
int main()
{
	float s,a,b,c,area;
	printf("Enter the three sides of triangle : ");
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Area of triangle = %f",area);
	return 0;
}
/* OUTPUT:
Enter the three sides of triangle : 3 4 5
Area of triangle = 6.000000 */
