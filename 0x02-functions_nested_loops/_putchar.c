#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout 
 * 0c: The character to print 
 *
 * Return: On sucess 1.
 *         On error. -1 is returned. and error is set approriately 
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}	
