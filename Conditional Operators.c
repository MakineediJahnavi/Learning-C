/* Program to check whether the character is lower case alphabet or not */
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter any character : ");
	scanf("%c",&ch);
	(ch>='a'&&ch<='z'?printf("Lower case alphabet"):printf("Not a lower case alphabet"));
	return 0;
}
/* OUTPUT:
Enter any character : j
Lower case alphabet */

/* program to check whether a character is special symbol or not */
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter any character : ");
	scanf("%c",&ch);
	((ch>=0&&ch<48)||(ch>57&&ch<65)||(ch>90&&ch<97)||(ch>122)?printf("Entered character is a special symbol"):
		printf("Entered character is not a special symbol"));
	return 0;
}
/* OUTPUT:
Enter any character : &
Entered character is a special symbol */

/* Program to check whether a year is leap year or not */
#include<stdio.h>
int main()
{
	int year;
	printf("Enter any year : ");
	scanf("%d",&year);
	((year%400==0)||(year%4==0&&year%100!=0)?printf("Entered year is a leap year"):
		printf("Entered year is not a leap year"));
	return 0;
}
/* OUTPUT:
Enter any year : 100
Entered year is not a leap year */

/* program to find greatest among three numbers */
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter any three numbers : ");
	scanf("%d%d%d",&a,&b,&c);
	(a>b?(a>c?printf("%d is greatest",a):printf("%d is greatest",c)):
	(b>c?printf("%d is greatest",b):printf("%d is greatest",c)));
	return 0;
}
/* OUTPUT:
Enter any three numbers : 5 8 85
85 is greatest */

/* Check whether sum of squares of sine and cosine of an angle is 1 */
#include<stdio.h>
#include<math.h>
int main()
{
	int angle,sum;
	printf("Enter any angle : ");
	scanf("%d",&angle);
	angle=angle*3.14/180;
	sum=pow(sin(angle),2)+pow(cos(angle),2);
	(sum==1?printf("Sum of squares of sine and cosine of entered angle is 1"):
	        printf("Sum of squares of sine and cosine of entered angle is not 1"));
    return 0;
}
/* OUTPUT:
Enter any angle : 45
Sum of squares of sine and cosine of entered angle is 1 */

#include<stdio.h>
int main()
{
	float sal;
	printf("Enter the salary : ");
	scanf("%f",&sal);
	(sal>=25000&&sal<=40000?printf("Manager"):
	(sal>=15000&&sal<25000?printf("Accountant"):printf("Clerk")));
	return 0;
}
/* OUTPUT:
Enter the salary : 25000
Manager*/
