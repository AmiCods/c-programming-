#include<stdio.h>
#include<conio.h>
void main()
{
  int n,r,sum=0;
  clrscr();
  printf("enter the number \n");
  scanf("%d",&n);
  while(n>0)
  {
	r=n%10;
	printf("%d",r);
	n=n/10;

  }
  getch();
}