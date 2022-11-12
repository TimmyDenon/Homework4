#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define size 5
int in[size];
int t;
int main()
{
	printf("Enter 5 number :\n");
	for (int i = 0; i < size; i++)
	{
		scanf("%d", &in[i]);
	}
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j <= size - i; j++)
		{
			if (in[j + 1] > in[j])
			{
				t = in[j];
				in[j] = in[j + 1];
				in[j + 1] = t;
			}
		}
	}
	for (int i = 0; i < size; i++)
	{
		printf("%d ", in[i]);
	}
}