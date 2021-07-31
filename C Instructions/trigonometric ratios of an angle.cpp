/* Program to print trigonometric ratios */
#include<stdio.h>
#include<math.h>
int main()
{
	float t,s,c,a;
	printf("Enter an angle : ");
	scanf("%d",&a);
	a=(a*180)/3.14; /* coverting into degrees */
	s=sin(a);
	c=cos(a);
	t=tan(a);
	printf("sin=%f cos=%f tan=%f",s,c,t);
	return 0;
}
/* OUTPUT:
Enter an angle : 0
sin=0.000000 cos=1.000000 tan=0.000000 */
