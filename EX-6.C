#include<stdio.h>
#include<conio.h>

void main()
{
	float per,maths,pce,phy,pps,egd,total;
	clrscr();
	printf("Enter the mark of maths\n");
	scanf("%f",&maths);
	printf("Enter the mark of pce\n");
	scanf("%f",&pce);
	printf("Enter the mark of phy\n");
	scanf("%f",&phy);
	printf("Enter the mark of pps\n");
	scanf("%f",&pps);
	printf("Enter the mark of egd\n");
	scanf("%f",&egd);
	total=(phy+maths+pce+pps+egd);
	per=(total/500*100);
	printf("The total marks of student is %f\n",total);
	printf("The percentage of student is %f\n",per);
	getch();
}

