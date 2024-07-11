#include <stdio.h>
#include <conio.h>

void main()
{
 int a[3][3],row,col;
 clrscr();
 printf("Enter array elements \n");
 for (row=0;row<3;row++)
 {
  for (col=0;col<3;col++)
  {
   scanf("%d",&a[row][col]);
  }
 }
 printf("array elements \n");
 for (row=0;row<3;row++)
 {
  for (col=0;col<3;col++)
  {
   printf("%d",a[row][col]);
  }
  printf("\n");
 }
 getch();
}