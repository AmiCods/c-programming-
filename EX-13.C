#include<stdio.h>
#include <conio.h>

void main ()
{
 int score;
 printf("enter any score\n");
 scanf("%d",&score);
 if (score<=100 && score>=90)
   printf("Grade A");
 else if (score<=90 && score>=80)
   printf("Grade B");
 else if (score<=80 && score>=70)
   printf("Grade C");
 else if (score<=70 && score>=60)
   printf("Grade D");
 else if (score<=60 && score>=50)
   printf("Grade E");
 else if (score<50)
   printf("Grade F");
 else
   printf("enter the valid score between 0 to 100");
getch();
}





