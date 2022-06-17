#ifndef FILE_MAIN
#define FILE_MAIN
/**
 *This is the the file with all the function s prototype for the c and pointer project
 */
/*function that takes a pointer to an int as parameter and updates the value it points to to 98.*/
void reset_to_98(int *n);
/*function that swaps the values of two integers.*/
void swap_int(int *a, int *b);
/*function that returns the length of a string.*/
int _strlen(char *s);
/* function that prints a string, followed by a new line, to stdout.*/
void _puts(char *str);
/*function that prints a string, in reverse, followed by a new line.*/
void print_rev(char *s);
/*function that reverses a string.*/
void rev_string(char *s);
/*function that prints every other character of a string, starting with the first character, followed by a new line.*/
void puts2(char *str);
/*function that prints half of a string, followed by a new line.*/
void puts_half(char *str);
/*function that prints n elements of an array of integers, followed by a new line.*/
void print_array(int *a, int n);
/* function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by d*/
char *_strcpy(char *dest, char *src);
/*function to put out */
int _putchar(char c);
/*Prtotypes for more pointers,array and strings */
/*function that concatenates two strings.*/
char *_strcat(char *dest, char *src);
/* function that concatenates two strings.*/
char *_strncat(char *dest, char *src, int n);
/* function that copies a string.*/
char *_strncpy(char *dest, char *src, int n);
/*function that compares two strings.*/
int _strcmp(char *s1, char *s2);
/*function that reverses the content of an array of integers.*/
void reverse_array(int *a, int n);
/*function that changes all lowercase letters of a string to uppercase.*/
char *string_toupper(char *);
/*function that capitalizes all words of a string.*/
char *cap_string(char *);
/*function that encodes a string into 1337.*/
char *leet(char *);
#endif
