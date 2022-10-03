#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int l = 3;
	malloc(sizeof(char) * 1024);
	char af[] = "After The Loop:)";
	char be[] = "Before The Loop :)";


	while (l > 0)
	{
		printf("\n\tI Am At Peace For The Sake Of It :)\n");

		l--;
	}

	printf("\n");


	return (0);
}
