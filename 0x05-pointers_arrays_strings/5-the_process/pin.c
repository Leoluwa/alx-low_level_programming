#include "main.h"
#include <stdlib.h>

int main(void)
{
	int Counter;
	int Count;
	int y;
	char *u;
	char *p;
	char arr[11] = "Abdulwahab";

	for (Count = 0; (arr[Count] != '\0'); )
	{
		Count++;
	}

	u = (char *) malloc((Count + 1));

	for (y = (Count - 1), Counter = 0; Counter < (Count); y--, Counter++)
	{
		*(u + Counter) = *(arr + y);
	}

	p = arr;

	for (Counter = 0; Counter < Count; Counter++)
	{
		*(p + Counter) = *(u + Counter);
	}
}
