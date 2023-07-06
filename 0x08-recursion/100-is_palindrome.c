#include "main.h"
#include "2-strlen_recursion.c"
/**
 * is_palindrome - check if the string is palindrome
 * @s: the given string
 * Return: 1 if true 0 if false
 */
int is_palindrome(char *s)
{
	int n = _strlen_recursion(s);

	return (is_palindrome_helper(s, n, 1));
}
/**
 * is_palindrome_helper - helper function to check
 *	each letter to its oppsite
 *@s: the string
 *@n: size of s
 *@i: int to reduce from the size to reach the character
 *Return: 1 if palindrome else 0
 */
int is_palindrome_helper(char *s, int n, int i)
{
	if (i >= n)
		return (1);
	if (s[0] != s[n - i])
		return (0);
	if (s[0] == s[n - i] && return (is_palindrome_helper(s + 1, n, i + 2)))
		return (1);
}
