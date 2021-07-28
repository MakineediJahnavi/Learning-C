/* Converting temperature from Fahrenheit degrees to Centigrade degrees */
#include<stdio.h>
int main()
{
	float f,c;
	printf("Enter the temperature in Fahrenheit degrees = ");
	scanf("%f",&f);
	c=(f-32)*5/9;
	printf("Temperature in Centigrade degrees = %f",c);
}
/* OUTPUT
Enter the temperature in Fahrenheit degrees = 32
Temperature in Centigrade degrees = 0.000000 */

