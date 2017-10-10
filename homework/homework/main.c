#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declare variables
	int data = 0; //number of floors
	int i = 0;
	int j = 0;
	int y = 0;
	int k = 0;
	int n = 0;
	//ask the number of floors
	printf("enter number of floors: ");
	scanf("%d", &data);
	//	print a triangle with a vertex at the top
	while (i < data)
	{
		while (n <= i)
		{
			printf("*");
			n++;
		}
		n = 0;
		printf("\n");
		i++;
	}
	//print the triangle with the vertex at the bottom
	printf("\n");
	i = 0;
	while (i < data)
	{
		n = data - 1;
		while (n >= i)
		{
			printf("*");
			n = n - 1;
		}
		n = data - 1;
		printf("\n");
		i++;
	}
	//print the Christmas tree
	printf("\n");
	i = 0;
	while (i < data)
	{
		n = data - 1;
		while (n > i)
		{
			printf(" ");
			n = n - 1;
		}
		j = data;
		while (j > data - n)
		{
			printf("*");
			j = j - 1;
		}
		j = data;
		while (j > data - n)
		{
			printf("*");
			j = j - 1;
		}
		i++;
		n = data - 1;
		printf("*\n");
	}
	i = 0;
	while (i < data - 1)
	{
		printf(" ");
		i++;
	}
	printf("*");
	printf("\n\n");

	//second way
	n = 0;
	i = 0;
	j = data;
	while (i <= data - 1)
	{
		while (n < j - 1)
		{
			printf(" ");
			n++;
			y = 0;
		}
		k = 0;
		while (k < data - n)
		{
			printf("*");
			k++;
		}
		k = 0;
		while (k < data - n - 1)
		{
			printf("*");
			k++;
		}
		k = 0;
		printf("\n");
		j = j - 1;
		n = 0;
		i++;
	}
	i = 0;
	while (i < data - 1)
	{
		printf(" ");
		i++;
	}
	printf("*\n\n");
	//third way
	i = 0;
	y = 0;
	k = 0;
	while (i < data)
	{
		y = data;
		while (y>i + 1)
		{
			printf(" ");
			y = y - 1;
		}
		printf("*");
		while (k < i)
		{
			k++;
			if (i>0)	printf("**");
		}

		k = 00;
		printf("\n");
		i++;
		y = 0;
	}

	i = 0;
	while (i < data - 1)
	{
		printf(" ");
		i++;
	}
	printf("*\n");
	getch();    return 0;
}
