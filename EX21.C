#include <stdio.h>
#include <conio.h>

void main()
{
  int num;
  clrscr();

  do
  {
   printf("Enter the number\n ");
   scanf("%d",&num);

   printf("%d\n",num);
  }
  while (num!=100);
  getch();
}