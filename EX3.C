#include<stdio.h>
#include<conio.h>

void main()
{
	int p,n;
	float r,s;
	clrscr();
	printf("Enter the principale amount : \n");
	scanf("%d",&p);
	printf("Enter the no. of year : \n");
	scanf("%d",&n);
	printf("Enter the rate : \n");
	scanf("%f",&r);
	s=(p*n*r)/100;
	printf("the simple interest is %f",s);
	getch();

}