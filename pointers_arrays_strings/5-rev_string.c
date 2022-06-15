#include "main.h"

/**
* rev_string - reverses a string
* @s: string to be reversed
*/
void rev_string(char *s)
{
char tmp;
int i, z, z1;

z = 0;
z1 = 0;

while (s[z] != '\0')
{
z++;
}

z1 = z - 1;

for (i = 0; i < z / 2; i++)
{
tmp = s[i];
s[i] = s[z1];
s[z1--] = tmp;
}
}
