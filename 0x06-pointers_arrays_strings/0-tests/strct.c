#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *ptr;
	short Count = 0;
	short Counted = 0;
	short Counter = 0;
	short Counting = 0;
	char src[] = "wahab";
	char dest[11] = "Abdul";

	while (*(src + Count) != '\0')
	{
		Count++;
	}

	while (*(dest + Counter) != '\0')
	{
		Counter++;
	}

	Counted = (Count + Counter);

	ptr = (char *)malloc(Counted);

	for (Counting = 0; Counting < Counter; Counting++)
	{
		*(ptr + Counting) = *(dest + Counting);
	}

	for (Count = 0 ; Counting < Counted; Counting++, Count++)
	{
		*(ptr + Counting) = *(src + Count);
	}



	printf("\n%s\n", ptr);

	return (0);
}
