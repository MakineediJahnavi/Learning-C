/* Calculating area, perimeter of rectangle and circle */
#include<stdio.h>
int main()
{
	float l,b,r,ar,pr,ac,cc;
	printf("Length and breadth of rectangle are ");
	scanf("%f%f",&l,&b);
	ar=l*b;
	pr=2*(l+b);
	printf("Area of rectangle = %f\n",ar);
	printf("Perimeter of rectangle = %f\n",pr);
	printf("Radius of circle = ");
	scanf("%f",&r);
	ac=3.14*r*r;
	cc=2*3.14*r;
	printf("Area of circle = %f\n",ac);
	printf("Circumference of circle = %f",cc);
}

/* OUTPUT:
Length and breadth of rectangle are 5 10
Area of rectangle = 50.000000
Perimeter of rectangle = 30.000000
Rdius of circle = 1
Area of circle = 3.140000
Circumference of circle = 6.280000 */
   
