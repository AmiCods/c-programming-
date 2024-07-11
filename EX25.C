#include<stdio.h>
#include<conio.h>

void main()
{
int i,n;
int t1=0,t2=1;
int NextTerm=t1+t2;
clrscr();
printf("enter the number of terms : ");
scanf("%d",&n);
printf("Fibonacci series : %d %d",t1,t2);

for (i=3;i<=n;i++)
 {
   printf("%d",NextTerm);
   t1=t2;
   t2=NextTerm;
   NextTerm=t1+t2;
 }
getch();
}