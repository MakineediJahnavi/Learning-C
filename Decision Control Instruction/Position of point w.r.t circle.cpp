/* Position of point with respective to circle */
#include<stdio.h>
#include<math.h>
int main()
{
	int x,y,r,k;
	printf("Enter x and y coordinates of the point : ");
	scanf("%d%d",&x,&y);
	printf("Enter radius of the circle : ");
	scanf("%d",&r);
	k=x*x+y*y-r*r;
	if(k<0)
	printf("Given point lies inside the circle");
	else
	{
		if(k==0)
			printf("Given point lies on the circle");
		else
			printf("Given point lies outside the circle");
	}
	return 0;
}
