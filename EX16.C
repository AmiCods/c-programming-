#include <stdio.h>
#include <conio.h>

void main()
{
 int i,n,sum=0;
 clrsrc();
 printf("Enter any natural number 1 to n \n");
 scanf("%d",&n);
 for (i=1;i<=n;i++)
 {
   sum=sum+1;

 }
 printf("sum=%d\n",sum);
 getch();
}