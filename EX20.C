#include <stdio.h>
#include <conio.h>

void main()
{
  int n,i,count=0;
  clrscr();
  printf ("Enter the number : ");
  scanf("%d",&n);
  for (i=1;i<=n;i++)
  {
	if (n%1==0)
	{
	  count++;
	}
  }
  if (count==2)
	print ("it is a prime number ");
  else
	printf("it is not a prime number");

  getch();

}