#ifndef	MAIN_H
#define	MAIN_H


int _putchar(char p);

char *_strchr(char *s, char c);

void print_chessboard(char (*a)[8]);

void print_diagsums(int *a, int size);

char *_strpbrk(char *s, char *accept);

unsigned int _strspn(char *s, char *accept);

char *_strstr(char *haystack, char *needle);

char *_memset(char *s, char b, unsigned int n);

char *_memcpy(char *dest, char *src, unsigned int n);

#endif
