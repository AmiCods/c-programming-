#include <stdio.h>
#include <conio.h>

void main()
{
 int num,original,rem,result=0;
 clrscr();
 printf("Enter any 3 digit number : ");
 scanf("%d",&num);
 original=num;
 while(num!=0)
 {
   rem=num%10;
   result=result+rem*rem*rem;
   num=num/10;
 }
 if (original==result)
   printf("number is armstrong number");
 else
   printf("number is not armstong number ");

 getch();

}