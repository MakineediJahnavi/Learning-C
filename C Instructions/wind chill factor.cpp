/* Program to calculate wind chill facter */
#include<stdio.h>
#include<math.h>
int main()
{
	float v,t,wcf;
	printf("Enter wind velocity : ");
	scanf("%f",&v);
	printf("Enter temperature : ");
	scanf("%f",&t);
	wcf=35.74+0.6215*t+(0.4275*t-35.75)*pow(v,0.16);
	printf("Wind chill factor = %f",wcf);
	return 0;
}
/* OUTPUT:
Enter wind velocity : 25
Enter temperature : 100
Wind chill factor = 109.605705 */
