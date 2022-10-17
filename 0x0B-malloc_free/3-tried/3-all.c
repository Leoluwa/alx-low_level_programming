#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int l = 8, k = 8;
	int count;
	int **arr;
	int cnt;
	int i;

	arr = (int **)malloc(l * sizeof(int));

	for (count = 0; count < l; ++count)
	{
		arr[count] = (int *)malloc(k * sizeof(int));

		printf("%d\t%d\n", count, arr[count]);
	}

	for (count = 0; count < l; ++count)
	{
		for (cnt = 0; cnt < k; ++cnt)
		{
			;
		}
	}

	for (count = 0; count < l; ++count)
	{
		for (i = 0, cnt = 0; cnt < k; ++cnt)
		{
			printf("%d\t%d\n", arr[count][cnt], i);
			i++;
		}
	}

	printf("\n%d\n", i);

	return (0);
}
