#include<stdio.h>
#include<conio.h>

void main()
{
 int a,b,c;
 clrscr();
 printf("Enter any three numbers \n");
 scanf ("%d %d %d",&a,&b,&c);
 if (a>b)
   if (a>c)
	 printf("%d is largest number ",a);
   else
	 printf ("%d is largest number ",c);
 else
	if (b>c)
	  printf("%d is largest number ",b);
	else
	  printf("%d is largest number ",c);

 getch();
}