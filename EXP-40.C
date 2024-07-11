#include<stdio.h>
#include<conio.h>

void main()
{
 int a[2][2],b[2][2],c[2][2],i,j,sum,k;
 clrscr();
 printf("Enter the 1st matrix elements \n");
 for (i=0;i<2;i++)
 {
  for (j=0;j<2;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 printf("Enter the 2nd matrix elements \n");
 for (i=0;i<2;i++)
 {
  for (j=0;j<2;j++)
  {
   scanf("%d",&b[i][j]);
  }
 }
 printf("Multiplication of two matrix \n");
 for (i=0;i<2;i++)
 {
  for (j=0;j<2;j++)
  {
   sum=0;
   for (k=0;k<2;k++)
   {
   sum=sum+a[i][k]*b[k][j];
   }
  }
  c[i][j]=sum;
  printf("%d",c[i][j]);
  }
  printf("\n");
  getch();
}