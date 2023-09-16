#include "variadic_functions.h"
/**
 * print_char- print char
 * @ptr: arg pointer
 * @separator:strig separator
 * Return: nothing
 *
 */
void print_char(char *separator, va_list ptr)
{
printf("%s%c", separator, va_arg(ptr, int));
}

/**
 * print_int- print integer
 * @ptr: arg pointer
 * @separator:strig separator
 * Return: nothing
 *
 */
void print_int(char *separator, va_list ptr)
{
printf("%s%d", separator, va_arg(ptr, int));
}

/**
 * print_float- print float
 * @ptr: arg pointer
 * @separator:strig separator
 * Return: nothing
 *
 */
void print_float(char *separator, va_list ptr)
{
printf("%s%f", separator, va_arg(ptr, double));
}

/**
 * print_string- print string
 * @ptr: arg pointer
 * @separator:strig separator
 * Return: nothing
 *
 */
void print_string(char *separator, va_list ptr)
{
char *s;
s = va_arg(ptr, char*);
if (s == NULL)
{
s = "(nil)";
}
printf("%s%s", separator, s);
}

/**
 * print_all- print anything
 * @format: number of parameters pass the function
 * Return: nothing
 *
 */
void print_all(const char * const format, ...)
{
int x, i = 0;
char *separator = "";
va_list ptr;
FORMAT form[] = {
{"c", print_char},
{"i", print_int},
{"f", print_float},
{"s", print_string},
{NULL, NULL}
};
va_start(ptr, format);
while (format != NULL && format[i] != '\0')
{
x = 0;
while (form[x].f != NULL)
{
if (format[i] == form[x].f[0])
{
form[x].ff(separator, ptr);
separator = ", ";
}
x++;
}
i++;
}
printf("\n");
va_end(ptr);
}
