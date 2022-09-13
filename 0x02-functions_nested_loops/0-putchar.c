/*
 * I am at peace just for the sake of it :)
 *
 * Abdulwahab
 *
 */
#include <stdio.h>
#include <unistd.h>

#define	k_index	9
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;	/* a buffer */
	short Count;	/* for loop counter */	
	short f = 1;	/* stdout file descriptor */
	short Size = 1;	/* the size of item to be printed by write() */
	
	char Array[k_index] = { '_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\n' };

	for (Count = 0; Count < k_index; Count++)
	{
		c = Array[Count];
		write(f, &c, Size);
	}

	return (0);
}
