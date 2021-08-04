/* Find the youngest among three friends */
#include<stdio.h>
int main()
{
	int r,s,a,y;
	printf("Enter ages of Ram, Shyam, Ajay ");
	scanf("%d%d%d",&r,&s,&a);
	if(r<s)
	{
		if(r<a)
		printf("Youngest among Ram, Shyam, Ajay is Ram");
		else
		printf("Youngest among Ram, Shyam, Ajay is Ajay");
	}
	if(s<r)
	{
		if(s<a)
		printf("Youngest among Ram, Shyam, Ajay is Shyam");
		else
		printf("Youngest among Ram, Shyam, Ajay is Ajay");
	}
	return 0;
}
/* OUTPUT:
Enter ages of Ram, Shyam, Ajay 21 22 25
Youngest among Ram, Shyam, Ajay is Ram */
