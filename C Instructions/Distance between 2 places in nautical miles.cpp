/* To calculate distance between two places in nautical miles */
#include<stdio.h>
#include<math.h>
int main()
{
	float L1,L2,G1,G2,D;
	printf("Enter latitude and longitude of 1st place ");
	scanf("%f%f",&L1,&G1);
	printf("Enter latitude and longitude of 2nd place ");
	scanf("%f%f",&L2,&G2);
	/* Converting latitude and Longitude into degrees */
	L1=(L1*180)/3.14;
	L2=(L2*180)/3.14;
	G1=(G1*180)/3.14;
	G2=(G2*180)/3.14;
	D=3963*acos(sin(L1)*sin(L2)+cos(L1)*cos(L2)*cos(G2-G1));
	printf("Distance between two places is %f",D);
	return 0; 
}
/* OUTPUT:
Enter latitude and longitude of 1st place 10 11
Enter latitude and longitude of 2nd place 20 21
Distance between two places is 5530.662598 */
