#include<stdio.h>
#include<conio.h>

void main()
{
	int dist;
	float m,km;
	clrscr();
	printf("Enter the value in calculatot\n");
	scanf("%d",&dist);

	m=dist*0.01;
	km=dist*0.00001;
	printf("The distance in the meter = %.2f \n",m);
	printf("The distance in the kilometer = %.2f \n",km);
	getch();
}
