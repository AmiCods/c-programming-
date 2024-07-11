#include<stdio.h>
#include<conio.h>
//to print 2nd array
void mian()
 int row,col,a[3][3];
 clrscr();
 printf("enter elements to the array\n");
 for(row= 0;row<3;row++)
  for(col=0;col<3;col++)
   scanf("%d",&a[row][col]);

   printf("array elements are\n");
 for(row= 0;row<3;row++)
  for(col=0;col<3;col++)
   printf("%d",&a[row][col]);
   printf("\n");getch()
