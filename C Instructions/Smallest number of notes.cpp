/* Program to compute smallest number of notes that will combine to give entered amount */
#include<stdio.h>
int main()
{
	int amount,hun,fif,ten,fiv,two,one,total;;
	printf("Enter the amount : ");
	scanf("%d",&amount);
	hun = amount/100;
	amount = amount%100;
	fif = amount/50;
	amount = amount%50;
	ten = amount/10;
	amount = amount%10;
	fiv = amount/5;
	amount = amount%5;
	two = amount/2;
	amount = amount%2;
	one = amount;
	total=hun+fif+ten+fiv+two+one;
	printf("Smallest number of notes = %d",total);
	return 0; 
}
/* OUTPUT:
Enter the amount : 54321
Smallest number of notes = 546 */
