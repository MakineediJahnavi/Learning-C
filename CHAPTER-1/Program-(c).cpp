/* Paper of size A0 has dimensions 1189 mm * 841 mm. Each subsequent size A(n) is defined as A(n-1) cut in half parallel to its shorter sides. Thus paper of size A1 would have dimensions 841 mm * 594 mm. Write a program to calculate and print paper sizes A0,A1,A2,....A8. */
#include<stdio.h>
int main()
{
	int i,h=1189,w=841,t;
	for (i=0; i<9; i++)
	{
		printf("A%d: %d * %d\n",i,h,w);
		t=h;
		h=w;
		w=t/2;
	}
	return 0;
	
}
/* OUTPUT:
A0: 1189 * 841
A1: 841 * 594
A2: 594 * 420
A3: 420 * 297
A4: 297 * 210
A5: 210 * 148
A6: 148 * 105
A7: 105 * 74
A8: 74 * 52 */
