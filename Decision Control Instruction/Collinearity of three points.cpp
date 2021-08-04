/* Program to check if all the three points fall on the same line */
#include<stdio.h>
#include<math.h>
int main()
{
	float x1,x2,x3,y1,y2,y3,s1,s2,s3;
	printf("Enter x and y coordinates of 1st point : ");
	scanf("%d%d",&x1,&y1);
	printf("Enter x and y coordinates of 2nd point : ");
	scanf("%d%d",&x2,&y2);
	printf("Enter x and y coordinates of 3rd point : ");
	scanf("%d%d",&x3,&y3);
	s1=fabs(x1-x2)/fabs(y1-y2);
	s2=fabs(x1-x3)/fabs(y1-y3);
	s3=fabs(x2-x3)/fabs(y2-y3);
	if(s1==s2&&s2==s3)
	printf("Given three points are collinear");
	else
	printf("Given three points are not collinear");
	return 0;
}
