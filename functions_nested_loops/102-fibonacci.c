#include <stdio.h>
/**
* main - prints the first 50 Fibonacci numbers, starting with 1 and 2
* followed by a new line
* Return: 0
*/
int main(void)
{
long int a, b, i, n;
b = 1;
a = 2;
for (i = 1; i <= 50; ++i)
{
if (b != 20365011074)
{
printf("%ld, ", b);
}
else
{
printf("%ld\n", b);
}
n = b + a;
b = a;
a = n;
}
return (0);
}
