#include <stdio.h>

int main(void)
{
	int u;
	int k;
	int i;
	int l;
	char lower[26];
	char upper[26];
	char tik[] = "Abdulwahab. he is,of course;here again";
	char Separators[] = {' ',',','.',';','!','?','"','(',')','{','}'};

	printf("\n%s\n", tik);

	l = 0;
	
	while (*(tik + l) != '\0')
	{
		l++;
	}

	for (i = 65, u = 0; i <= 90; i++, u++)
	{
		upper[u] = i;
	}

	for (k = 97, u = 0; k <= 122; k++, u++)
	{
		lower[u] = k;
	}

	for (u = 1; u < l; u++)
	{
		for (i = 0; i < 10; i++)
		{
			if (*(tik + u) == *(Separators + i))
			{
				for (k = 0; k < 26; k++)
				{
					if (*(tik + (u + 1)) == lower[k])
					{
						*(tik + (u + 1)) = upper[k];
					}
				}
			}
		}
										
	}

	printf("\n%s\n", tik);

	
	return (0);
}
