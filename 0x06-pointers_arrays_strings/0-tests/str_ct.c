#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *ptr;
	short Count = 0;
	short Counted = 0;
	short Counter = 0;
	short Counting = 0;
	char src[] = "Holberton Certified Full Stack Engineer :)";
	char dest[] = "Abdulwahab, ";

	while (*(src + Count) != '\0')
	{
		Count++;
	}
	
	printf("\nsrc ~ %d\n", Count);

	while (*(dest + Counter) != '\0')
	{
		Counter++;
	}

	printf("\ndest ~ %d\n", Counter);

	Counted = (Count + Counter);

	printf("\nCounted ~ %d\n", Counted);

	ptr = (char *)malloc(Counter);

	for (Counting = 0; Counting < Counter; Counting++)
	{
		*(ptr + Counting) = *(dest + Counting);
	}

	for (Count = 0 ; Count < Counter; Count++)
	{
		*(dest + Count) = *(ptr + Count);
	}

	for (Counting = 0; Count <= Counted; Counting++, Count++)
	{
		if (Count < Counted)
		{
			*(dest + Count) = *(src + Counting);

			printf("\nNot there yet!\n");
		}
		
		if (Count == Counted)
		{
			*(dest + Count) = '\0';

			printf("\nAt *(dest + %d) :) ~ %d\n", Count, Count);
		}
	}



	printf("\n%s\n", dest);

	return (0);
}
