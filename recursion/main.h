#ifndef FILE_MAIN
#define FILE_MAIN
/**
*This is the the file with all the function s prototype for the recursion project 
*/
/*function to put out */
int _putchar(char c);
/*function that prints a string, followed by a new line.*/
void _puts_recursion(char *s);
/*function that prints a string in reverse*/
void _print_rev_recursion(char *s);
/*function that returns the length of a string.*/
int _strlen_recursion(char *s);
/* function that returns the factorial of a given number.*/
int factorial(int n);
/*function that returns the value of x raised to the power of y*/
int _pow_recursion(int x, int y);
/*function that returns the natural square root of a number.*/
int _sqrt_recursion(int n);
int actual_sqrt_recursion(int n, int i);
/* function that returns 1 if the input integer is a prime number, otherwise return 0.*/
int is_prime_number(int n);
int actual_prime(int n, int i);
#endif
