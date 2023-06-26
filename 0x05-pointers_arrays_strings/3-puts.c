#include "main.h"
/**
 * _puts - Prints a string
 * @str: The string to print
 * Return: void
 */

void_puts(char *str)

{
        for (; *str != '\0'; str++)
        {
        _putuchar(*str);
        }
        _putuchar('\n');
}
