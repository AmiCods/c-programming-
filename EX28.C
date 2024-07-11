#include<stdio.h>
#include<conio.h>

void main()
{
  int i,j,k,rows;
  clrscr();
  printf("Enter the number of rows : ");
  scanf("%d",&rows);
  for (i=1;i<=rows;i++)
  {
	for (j=rows;j>i;j--)
	{
	  printf (" ");
	}
	for (k=1;k<=i;k++)
	{
	  printf ("!");
	}
	printf("\n");
  }
  getch();
}