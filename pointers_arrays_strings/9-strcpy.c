#include "main.h"
/**
* *_strcpy - string pointed to by src
* including the terminating null byte (\0)
* to the buffer pointed to by dest
* @dest: pointer to the buffer in which we copy the string
* @src: string to be copied
*
* Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
int z, i;

z = 0;

while (src[z] != '\0')
{
z++;
}

for (i = 0; i < z; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';

return (dest);
}
