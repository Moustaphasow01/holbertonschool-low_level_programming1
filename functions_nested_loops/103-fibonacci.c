#include <stdio.h>
/**
* main - finds and prints the sum of the even-valued terms
* followed by a new line
* Return: 0
*/
int main(void)
{
int i;
unsigned long int a, b, n, s;
b = 1;
a = 2;
s = 0;
for (i = 1; i <= 33; ++i)
{
if (b < 4000000 && (b % 2) == 0)
{
s = s + b;
}
n = a + b;
b = a;
a = n;
}
printf("%lu\n", s);
return (0);
}
