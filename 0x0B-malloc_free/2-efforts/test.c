#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char str0[] = "Abdulwahab";
	char str1[2];
	char *str = NULL;
	char type;
		
	int l, m;
	int a = 0, u = 0;

	if (str == NULL)
		printf("\n\t~1\n");

	str1[0] = (char)NULL;
	printf("\nAfter declarations\n\t%d\n\n", str1[0]);

	type = str0[0];
	if (type)
	{
		while (str0[a])
			a++;
	}

	puts("\nAfter a loop\n");

	type = str1[0];
	printf("\n%d\n", type);
	if (type)
	{
		while (str1[u])
			u++;
	}

	puts("\nAfter u loop\n");

	char *ptr = (char *)malloc((a + u) * sizeof(char));
	if (ptr)
	{
		puts("\nmalloc success\n");

		for (l = 0; l < a; l++)
		{
			ptr[l] = str0[l];
		}
		puts("\nAfter first for loop\n");

		for (m = 0; l < (a + u); l++, m++)
		{
			ptr[l] = str1[m];
		}
		puts("\nAfter second for loop\n");
	}
	else
	{
		puts("\nIn the else\n");
	}

	printf("\n\t%s\n\n", ptr);

	free(ptr);

	return (0);
}
