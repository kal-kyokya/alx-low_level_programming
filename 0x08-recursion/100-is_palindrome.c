#include "main.h"

/**
 *_strlen_recursion - Return the length of a string.
 *@s: String to be passed in function.
 *
 *Return: 0 if program runs successfully.
 */
int _strlen_recursion(char *s)
{
	int count;

	if (*s == '\0')
		return (0);
	count = 1 + _strlen_recursion(s + 1);
	return (count);
}

/**
 *helper - Assist the main function.
 *@strh:String to be assessed.
 *@strlen: Length of the string.
 *@counter: Tracks string elements.
 *
 *Return: Same as main function
 */
int helper(char *strh, int strlen, int counter)
{
	if (strlen == 0)
		return (1);
	else if (strh[counter] == *(strh + (strlen - 1)))
		return (helper(strh, strlen - 1, counter + 1));
	return (0);
}

/**
 *is_palindrome - Checks a string as palindrome or not.
 *@str: String to be evaluated.
 *
 *Return: 1 if string is a palindrome, 0 if not.
 */
int is_palindrome(char *str)
{
	int strlen, counter;

	strlen = _strlen_recursion(str);
	counter = 0;
	return (helper(str, strlen, counter));
}
