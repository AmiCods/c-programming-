#include <stdio.h>
#include <conio.h>

void main()
{
  int num,rem,sum=0,j;
  clrscr();
  printf("Enter any number : ");
  scanf("%d",&num);
  for (j=1;j<num;j++)
  {
	rem=num%j;
	if (rem==0)
	 {
	   sum=sum+j;
	 }
  }
  if(sum==sum)
	printf("The number is a perfect number ");
  else
	printf("The number is not a perfext number ");

  getch();
}