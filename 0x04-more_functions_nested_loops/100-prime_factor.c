#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
long int l;
long int most;
long int m;

l = 612852475143;
most = -1;

while (l % 2 == 0)
{
most = 2;
l /= 2;
}

for (m = 3; m <= sqrt(n); m = m + 2)
{
while (l % m == 0)
{
most = m;
l = l / m;
}
}

if (l > 2)
most = l;

printf("%ld\n", most);

return (0);
}
