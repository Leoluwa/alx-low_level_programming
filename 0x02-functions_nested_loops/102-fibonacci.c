#include <stdio.h>

int main(void)
{
	long Sum;
	int Count;
	long l = 1;
	long k = 2;
	
	for (Count = 1 ; Count <= 50; Count++)
	{
		if (Count <= 2)
		{
			printf("%d", Count);
		}
		else
		{
			Sum = (k + l);
			printf("%ld", Sum);
			l = k;
			k = Sum;
		}

		if (Count < 50)
		{
			printf(", ");
		}
	}

	printf("\n");


	return (0);
}
