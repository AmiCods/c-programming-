#include<stdio.h>
#include<conio.h>
void main()
{
  int i;
  printf("Enter the number : ");
  scanf("%d",i);
  clrscr();

  do
  {
	printf("%d\n",i);
	i--;
  }
  while (i>0);
  getch();

}

