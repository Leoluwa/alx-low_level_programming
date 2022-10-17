/*#include "main.h"*/
#include <stdio.h>
#include <stdlib.h>

int *alloc_grid(int width, int height)
{
	int *arr;
	int e, m;


	if ((width == 0) || (width < 0))
		return (NULL);

	if ((height == 0) || (height < 0))
		return (NULL);

	arr = (int *)malloc((width * height) * sizeof(int));

	for (e = 0; e < width; e++)
		for (m = 0; m < height; m++)
			*(arr + (e * height) + m) = 0;

	for (e = 0; e < width; e++)
	{
		for (m = 0; m < height; m++)
		{
			printf("%d ", *(arr + (e * height) + m));
		}

		printf("\n");
	}

	*(arr + (3 * height) + 4) = 89;

	for (e = 0; e < width; e++)
	{
		for (m = 0; m < height; m++)
		{
			printf("%d ", *(arr + (e * height) + m));
		}

		printf("\n");
	}

	return (arr);
}

int main(void)
{
	alloc_grid(7, 7);

	return (0);
}
