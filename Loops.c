/* Program to print prime numbers from 1to 300 */
#include<stdio.h>
int main()
{
	int n,i;
	printf("Prime numbers from 1 to 300:\n\t");
	for(n=1;n<=300;n++)
	{
		for(i=2;i<n;i++)
		{
			if(n%i==0)
			break;
		}
		if(i==n)
		printf("%d\t",n);
	}
	return 0;
}

/* Program to print first seven terms of the series 1/1!+2/2!+3/3!.... */
#include<stdio.h>
int main()
{
	int i,j;
	float sum=0.0,fact;
	for(i=1;i<=7;i++)
	{
		fact=1.0;
		for(j=1;j<=i;j++)
		{
			fact=fact*j;
	    }
		sum=sum+i/fact;
	}
	printf("Sum of the series = %f",sum);
	return 0;
}

/* Program to generate all combinations of 1, 2 and 3 */
#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			for(k=1;k<=3;k++)
			printf("%d,%d,%d\n",i,j,k);
		}
	}
	return 0;
}

/* Program to print multiplication table */
#include<stdio.h>
int main()
{
int n,i;
printf("Enter any number : ");
scanf("%d",&n);
for(i=1; i<=10; i++)
{
	printf("%d * %d = %d\n",n,i,n*i);
}
return 0;
}

/* Program to print intelligence table */
#include<stdio.h>
int main()
{
	int y;
	float i,x;
	for(y=1; y<=6; y++)
	{
		for(x=5.5; x<=12.5; x+=0.5)
		{
			i=2+(y+0.5*x);
			printf("i=%f y=%d x=%f\n",i,y,x);
		}
	}
	return 0;
}

/* Program to read 10 setsof p, r, n & q and calculate the corresponding a's */
#include<stdio.h>
#include<math.h>
int main()
{
	int q,n,p,i;
	float r,a;
	for(i=1; i<=10; i++)
	{
		printf("Enter the values of p, r, n & q : ");
		scanf("%d%f%d%d",&p,&n,&r,&q);
		a=p*pow(1+r/q,n*q);
		printf("a=%f\n",a);
	}
	return 0;
}




