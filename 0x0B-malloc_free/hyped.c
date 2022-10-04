#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int m = 0;
	int siz;
	int size;
	int i, u;
	int *ptr;
	int **utr;
	int **itr;

	siz = 7;
	size = 7;
	
	ptr = (int *)malloc(siz * sizeof(int));

	itr = (int **)malloc((siz + 1) * sizeof(int));

	for (u = 0; u < size; u++)
	{
		itr[u] = (int *)malloc(size * sizeof(int));
	}

	for (i = 0; i < siz; i++)
	{
		ptr[i] = 2;
	}

	for (u = 0; u < siz; u++)
	{
		printf("%d ", ptr[u]);
	}

	utr = &ptr;

	**itr = 9;

	printf("\n\n%ld\t%ld\t%ld\t%ld\t%ld\t%ld\t%ld\n\n", **utr, *ptr, itr, *itr, **itr, itr[0][0], sizeof(itr[siz]));

	for (i = 0; i < siz; i++)
	{
		for (u = 0; u < size; u++)
		{
			itr[i][u] = 5;
			printf("\nhey\t%d\t%d\t%d\t~%d\n", m, i, u, itr[i][u]);
			m++;
		}
	}



	return (0);
}
