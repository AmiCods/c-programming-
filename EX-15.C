#include<stdio.h>
#include<conio.h>

void main()
{
 int num1,num2,num3,choice;
 clrscr();
 printf("Enter any two number \n");
 scanf("%d %d",&num1,&num2);
 printf("Press \n 1 for sum\n 2 for sunb\n 3 for mul\n n4 for div\n");
 scanf("%d",&choice);
 switch(choice)
 {
  case 1:
	printf("sum=%d\n",num1+num2);
	break;
  case 2:
	printf("sub=%d\n",num1-num2);
	break;
  case 3:
	printf("mul=%d\n",num1*num2);
	break;
  case 4:
	printf("div=%d\n",num1/num2);
	break;
  default:
	printf("Enter the valid choice");
 }
 getch();
}