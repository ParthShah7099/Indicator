#include<stdio.h>
#include<conio.h>

/*

Q1. Length Finder
Develop a program that finds the length of a string using a pointer.

*/

void main()
{
	char a[100];
	char *ptr;
	int i,length = 0;
	clrscr();
	printf("Enter a string:- ");
	gets(a);
	ptr = a;
	for(i=0; ptr[i] != '\0'; i++)
	{
		if(*ptr != 0)
		{
			length++;
		}
	}
	printf("The length of the string %s is %d",a,length);
	getch();
}