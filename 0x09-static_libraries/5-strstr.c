#include "main.h"
/**
 * _strstr - access point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *i = haystack;
char *q = needle;
while (*i == *q && *q != '\0')
{
i++;
q++;
}
if (*q == '\0')
return (haystack);
}
return (0);
}
