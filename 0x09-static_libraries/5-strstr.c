#include "main.h"

/**
 * *_strstr - function that locates a substring
 * @haystack: the string
 * @needle: the substring
 * Return: pointer to the beginning of located substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *begin = haystack;
	char *nneedle = needle;

	while (*haystack != '\0')
	{
		begin = haystack;
		nneedle = needle;

		while (*haystack != '\0' && *nneedle != '\0' && *haystack == *nneedle)
		{
			haystack++;
			nneedle++;
		}
		if (!*nneedle)
			return (begin);
		haystack = begin + 1;
	}
	return (0);
}
