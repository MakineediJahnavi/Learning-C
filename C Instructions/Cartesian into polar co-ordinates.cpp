/* Program to convert Cartesian co-ordinates into polar c0-ordinates*/
#include<stdio.h>
#include<math.h>
int main()
{
	float x,y,r,theta;
	printf("Enter Cartesian co-ordinates ");
	scanf("%f%f",&x,&y);
	r=sqrt(x*x+y*y);
	theta=atan(y/x);
	theta=(theta*180)/3.14; /* to convert into degrees */
	printf("Polar co-ordinates are (r=%f,theta=%f)",r,theta);
}
/* OUTPUT:
Enter Cartesian co-ordinates 1 1
Polar co-ordinates are (r=1.414214,theta=45.022827) */
