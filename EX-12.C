#include<stdio.h>
#include<conio.h>

void main()
{
 int year;
 clrscr();
 printf("Enter the year \n");
 scanf("%d",&year);
 if (year%4==0)
   if (year%100==0)
	 if (year%400==0)
	   printf ("%d Yes it is a leap year",year);
	 else
	   printf("%d is not a leap year",year);
   else
	  printf("%d Yes it is a leap year",year);
 else
	printf("%d is not a leap year",year);
 getch();
}
