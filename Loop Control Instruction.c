/* Calculate overtime pay of ten employees */
#include<stdio.h>
int main()
{
	int hours,i=1;
	float otpay;
	while(i<=10)
	{
		printf("Enter no. of hours worked : ");
		scanf("%d",&hours);
		if(hours>40)
			otpay=(hours-40)*12;
		else
			otpay=0;
		printf("Over time pay = %f\n",otpay);
		i++;
	}
	return 0;
}

/* Factorial value of a number */
#include<stdio.h>
int main()
{
	int n,i=1,j=1;
	printf("Enter any number : ");
	scanf("%d",&n);
	while(i<=n)
	{
		j=j*i;
		i++;
	}
	printf("Factorial of %d = %d",n,j);
	return 0;
}
/* OUTPUT:
Enter any number : 6
Factorial of 6 = 720 */

/* Compute value of one number raised to another */
#include<stdio.h>
int main()
{
	int n1,n2,i=1,j=1;
	printf("Enter two numbers : ");
	scanf("%d%d",&n1,&n2);
	while(i<=n2)
	{
		j=j*n1;
		i++;
	}
	printf("%d to the power of %d = %d",n1,n2,j);
	return 0;
}
/* OUTPUT: 
Enter two numbers = 2 3
2 to the power of 3 = 8 */

/* To print all the ASCII values and their equivalent characters */
#include<stdio.h>
int main()
{
	int i=0;
	while(i<=255)
	{
		printf("%d=%c\n",i,i);
		i++;
	}
	return 0;
}

/* To print out all Armstrong numbers between 1 and 500 */
#include<stdio.h>
#include<math.h>
int main()
{
	int n,num,d1,d2,d3,i=1;
	while(i<=500)
	{
		n=i;
		d1=n%10;
		n=n/10;
		d2=n%10;
		n=n/10;
		d3=n%10;
		num=pow(d1,3)+pow(d2,3)+pow(d3,3);
		if(i==num)
			printf("%d is an Armstrong number\n",i);
		i++;
	}
	return 0;
}

/* Matchstick game */
#include<stdio.h>
int main()
{
	int m=21,p,c;
	while(1)
	{
		printf("No. of matchsticks left = %d\n",m);
		printf("Pick up 1,2,3 or 4 matchsticks : ");
		scanf("%d",&p);
		if(p>4||p<1)
			continue;
		m=m-p;
		printf("No. of matchsticks left = %d\n",m);
		c=5-p;
		printf("Out of which computer picked %d\n",c);
		m=m-c;
		if(m==1)
		{
			printf("No. of matches left = %d\n",m);
			printf("You lost the game");
			break;
		}
	}
	return 0;
}

/* Count number of positives, negatives and zeros */
#include<stdio.h>
int main()
{
	int n=0,p=0,z=0,num;
	char ans='y';
	while(ans=='y'||ans=='Y')
	{
		printf("Enter a number : ");
		scanf("%d",&num);
		if(num==0)
			z++;
		if(num<0)
			n++;
		if(num>0)
			p++;
		fflush(stdin);
		printf("Do you want to continue?\n");
		scanf("%c",&ans);
	}
	printf("You entered %d positive numbers\n",p);
	printf("You entered %d negative numbers\n",n);
	printf("You entered %d zeros",z);
	return 0;
}

/* Program to obtain octal equivalent of an integer */
#include<stdio.h>
#include<math.h>
int main()
{
	int i=0,n1,n2,rem,oct=0;
	printf("Enter any integer : ");
	scanf("%d",&n1);
	n2=n1;
	while (n1>0)
	{
		rem=n1%8;
		n1=n1/8;
		oct=oct+rem*pow(10,i);
		i++;
	}
	printf("Octal equivalent of %d is %d",n2,oct);
	return 0;
}

