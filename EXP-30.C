#include<stdio.h>
#include<conio.h>

void main()
{
 int i,arr[100],size,min;
 clrscr();
 printf("Enter the array size (under 100)");
 scanf("%d",&size);
 printf("Enter the array elemnt");
 for (i=0;i<size;i++)
   {
   scanf("%d",&arr[i]);
   min=arr[0];
   }
 printf("this is a array\n");
 for(i=0;i<size;i++)
   {
   printf("%d\n",arr[i]);
   if (min>arr[i])
	min=arr[i];
   }
   printf("The minimum of array is %d \n",min);
 getch();
}