#include <stdio.h>
#include <conio.h>

void main()
 {
  int i,j,temp,size,a[100];
  clrscr();
  printf("Enter the array size :\n");
  scanf("%d",&size);
  printf("Enter the array elements \n");
  for(i=0;i<size;i++)
   scanf("%d",&a[i]);
  for (i=0;i<size-1;i++)
  {
   for (j=0;j<size-i-1;j++)
   {
	if (a[j]>a[j+1])
	{
	temp=a[j];
	a[j]=a[j+1];
	a[j+1]=temp;
	}
   }
  }
  printf("sorted array is : \n");
  for(i=0;i<size;i++)
  {
   printf("%d\n",a[i]);
  }
  getch();
  }










