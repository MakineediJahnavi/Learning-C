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

