#include<stdio.h>
#include<conio.h>

void main()
{
 int n,i,fact=1;
 clrscr();
 printf("Enter the any integer value \n");
 scanf("%d",&n);

 if (n<0)
   printf("Enter the positive number ");
 else
 {
   for (i=1;i<=n;i++)
   {
	 fact = fact *i;
   }
   printf("Factor of number is = %d",fact);
 }
 getch();
}



