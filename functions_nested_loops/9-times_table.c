#include "main.h"
/**
* times_table - prints the 9 times table, starting with 0
*/
void times_table(void)
{
int a, b, i;
for (i = 0; i < 10; i++)
{
for (b = 0; b < 10; b++)
{
a = b * i;
if (b == 0)
{
_putchar(a + '0');
}
if (a < 10 && b != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(a + '0');
}
else if (a >= 10)
{
_putchar(',');
_putchar(' ');
_putchar((a / 10) + '0');
_putchar((a % 10) + '0');
}
}
_putchar('\n');
}
}
