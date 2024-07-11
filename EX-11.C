#include <stdio.h>
#include <conio.h>

main()
{
	char ch;
	clrscr();
	printf ("Enter any character \n");
	scanf ("%c",&ch);
	if (ch>=65 && ch<=90)
		printf("%c is an upper albhabet",ch);
	else if (ch>=97 && ch<=122)
		printf ("%c is a lowwer albhabet", ch);
	else if (ch>=48 && ch<=57)
		print ("%c is a number",ch);
	else if ((ch>0 && ch<=77)||
			 (ch>=58 && ch<=64)||
			 (ch>=91 && ch<=96)||
			 (ch>123 && ch<=127))
		printf("%c is a special character",ch);
	else
		printf ("enter any valid character");

	getch();

}