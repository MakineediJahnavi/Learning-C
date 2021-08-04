/* Determination of position of point with respective to x and y axes */
#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter x and y coordinates of the point : ");
	scanf("%d%d",&x,&y);
	if(x==0&&y==0)
	printf("Given point is origin");
	else
	{
		if(x==0&&y!=0)
		printf("Given point lies on X axis");
		else
		{
			if(x!=0&&y==0)
			printf("Given point lies on Y axis");
			else
			printf("Given point neither lies on any axis nor origin");
		}
	}
	return 0;
}
