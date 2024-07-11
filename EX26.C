#include<stdio.h>
#include<conio.h>

void main()
{
  int i,k,rows;
  clrscr();
  printf("Enter the number of rows : ");
  scanf("%d",&rows);
  for (i=1;i<=rows;i++)
  {
	for (k=1;k<=(2*i)-1;k++)
	{
	  printf ("*");
	}
	printf("\n");
  }
  getch();

}