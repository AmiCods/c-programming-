#include<stdio.h>
#include<conio.h>
void main()
{
  int n,r,sum=0;
  clrscr();
  printf("enter thye number \n");
  scanf("%d",&n);
  while(n>0)
  {
	r=n%10;
	sum=sum+r;
	n=n/10;

  }
  printf("the sum of digit = %d ",sum);
  getch();
}