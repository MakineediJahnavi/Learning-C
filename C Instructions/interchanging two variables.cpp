/* Program to interchange contents of two variables */
#include<stdio.h>
int main()
{
	int C,D,x;
	printf("Enter the values of C and D : ");
	scanf("%d%d",&C,&D);
	x=C;
	C=D;
	D=x;
	printf("C=%d D=%d",C,D);
	return 0;
}
/* OUTPUT:
Enter the values of C and D : 10 20
C=20 D=10 */
