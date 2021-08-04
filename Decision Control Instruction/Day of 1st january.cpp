/* Calculate the day on 1st january of any year */
#include<stdio.h>
int main()
{
	int year,leapdays,firstday;
	long int normaldays,totaldays;
	printf("Enter year : ");
	scanf("%d",&year);
	normaldays=(year-1)*365;
	leapdays=((year-1)/4-(year-1)/100+(year-1)/400)*366;
	totaldays=leapdays+normaldays;
	firstday=totaldays%7;
	if (firstday==0)
	printf("Monday");
	if(firstday==1)
	printf("Tuesday");
	if(firstday==2)
	printf("Wednesday");
	if(firstday==3)
	printf("Thursday");
	if(firstday==4)
	printf("Friday");
	if(firstday==5)
	printf("Saturday");
	if(firstday==6)
	printf("Sunday");
	return 0;
}
