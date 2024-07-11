#include<stdio.h>
#include<conio.h>

void main()
{
	float c,f;
	clrscr();
	printf("Enter the temperature in celsius : ");
	scanf ("%f",&c);
	f=(c*1.8)+32;
	printf("The temperature in fahrenheit is = %2f",f);
	getch();
}