#include "main.h"

/**
 * str_length - determines the length of argument string.
 * @s: pointer to the argument string.
 *
 * Return: int, length of the string.
 *
 */
 
 int str_length(char *s)
 {
 	if (*s)
 	{
 		s++;
 		
 		return (1 + str_length(s));
 	}
 	
 	return (0);
 }
 
 
 /**
  * checker - checks if argument string is a palindrome.
  * @u: pointer to the argument string.
  * @l: length of argument string.
  *
  * Return: an integer.
  *
  */
  
  int checker(char *u, int l, int i)
  {  	
  	if (i >= l)
  	{
  		return (1);
  	}
  	
  	if (u[l] == u[i])
  	{
  		return (checker(u, (l - 1), (i + 1)));
  	}
  	
  	return (0);
  }
  
  
  /**
   * is_palindrome - returns 1 if string palindrome, 0 otherwise.
   * @str: pointer to the argument string.
   * 
   * Return: an tnteger.
   *
   */
   
   int is_palindrome(char *str)
   {
   	int k = 0;
   	int e = str_length(str);
   	
   	
   	return (checker(str, (e - 1), k));
   }
