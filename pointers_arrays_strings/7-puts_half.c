#include "main.h"

/**
* puts_half - prints half of a string
* followed by a new line
* @str: string to be printed
*/
void puts_half(char *str)
{
int z, n, i;

z = 0;

while (str[z] != '\0')
{
z++;
}

if (z % 2 == 0)
{
for (i = z / 2; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
} 
else if (z % 2)
{
for (n = (z - 1) / 2; n < z - 1; n++)
{
_putchar(str[n + 1]);
}
}
_putchar('\n');
}
