#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,sum,sub,mul,div;
	clrscr();
	printf("enter the num : \n");
	scanf("%d",&a);
	printf("enter the num2 : \n");
	scanf("%d",&b);
	sum=a+b;
	sub=a-b;
	div=a/b;
	mul=a*b;
	printf("%d + %d = %d\n",a,b,sum);
	printf("%d - %d = %d\n",a,b,sub);
	printf("%d * %d = %d\n",a,b,mul);
	printf("%d / %d = %d\n",a,b,div);
	getch();
}

getch();

