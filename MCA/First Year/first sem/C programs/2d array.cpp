#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	system("clr");
	int n, a[n][n], b[n][n], c[n][n] = {0};
	printf("Enter the size:");
	scanf("%d", &n);
	printf("\nEnter the Element for a:");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("\nEnter the Element for b:");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("\t%d", a[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("\t%d", b[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				c[i][j] = c[i][j] + a[i][k] * b[k][j];
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("\t%d", c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
