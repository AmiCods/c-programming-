#include<stdio.h>
#include<conio.h>

void main()
{
 int i,arr[100],size,sum=0;
 clrscr();
 printf("Enter the array size (under 100)");
 scanf("%d",&size);
 printf("Enter the array elemnt");
 for (i=0;i<size;i++)
   {
   scanf("%d",&arr[i]);
   }
 printf("this is a array\n");
 for(i=0;i<size;i++)
   {
   printf("%d\n",arr[i]);
   sum=sum+arr[i];
   }
   printf("SUM=%d",sum);
 getch();
}



