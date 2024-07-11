#include<stdio.h>
#include<conio.h>

void main()
{
  int a,b,result;
  clrscr();
  printf("enter the num1 : ");
  scanf("%d",&a);
  printf("Enter the num2 : ");
  scanf("%d",&b);
  printf("The relational operations are: \n");
  printf("Return value of (%d==%d) is %d \n",a,b,a==b);
  printf("Return value of (%d!=%d) is %d \n",a,b,a!=b);
  printf("Return value of (%d<%d) is %d \n",a,b,a<b);
  printf("Return value of (%d<=%d) is %d \n",a,b,a<=b);
  printf("Return value of (%d>=%d) is %d \n",a,b,a>=b);
  getch();

  //logical operator

  printf("The logical operator : \n");
  result=((a<b)||(a!=b));
  printf("Return value of the expess is %d \n",result)



}




