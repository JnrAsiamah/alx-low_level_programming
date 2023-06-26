#include "main.h"
/**
 * _puts - Prints a string in reverse
 * @str: The string to print
 * Return: void
 */

void print_rev(char *s)

{
        int c = 0;
        
        while (s[c] != '\0')
        {
        c++;
        }
        
        for (c -= 1; c >= 0; c--)
        {
        _putuchar(s[c]);
        }
        _putuchar('\n');
}
