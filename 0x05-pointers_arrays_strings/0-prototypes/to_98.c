#include <stdio.h>

void to_98(int *t);


void to_98(int *t)
{
	if ((*t) != 98)
	{
		*t = 98;
	}
}

int main(void)
{
	int h = 70;

	printf("\n\t%d\n", h);

	to_98(&h);

	printf("\n\t%d\n", h);

	h = 29;

	printf("\n\t%d\n", h);

	to_98(&h);

	printf("\n\t%d\n", h);


	return (0);
}
