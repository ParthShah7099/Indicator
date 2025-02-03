#include<stdio.h>
#include<conio.h>

/*

Q2. Cubes Generator
Develop a program to find the cubes of all element from a given 2D array
using pointer with UDF.

*/
void cubes(int *ptr[100][100],int row, int col);

void main()
{
	int i, j, row, col, a[100][100];
	int *ptr[100][100];
	clrscr();
	printf("Enter the number of rows in a 2D array:- ");
	scanf("%d",&row);
	printf("Enter the number of columns in a 2D array:- ");
	scanf("%d",&col);

	printf("Enter elements of the 2D array:-\n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("Enter a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Matrix with the entered elements:-\n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			ptr[i][j]  = &a[i][j];
		}
	}
	cubes(ptr, row, col);
	getch();


}
void cubes(int *ptr[100][100],int row, int col)
{
	int i,j;
	printf("Matrix with the cube values of entered elements:-\n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("%d ",*ptr[i][j] * *ptr[i][j] * *ptr[i][j]);
		}
		printf("\n");
	}
}