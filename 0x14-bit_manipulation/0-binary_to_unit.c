#include "main.h"
/**
 *binary_to_unit - function to convert bin to dec
 *@b:input string
 *Return: the result
 *
 */


unsigned int binary_to_uint(const char *b)
{
	if (b == NULL) 
	{
	return 0;
	}
	
    	unsigned int result = 0;
	int i = 0;

	while (b[i] != '\0')
	{
	if (b[i] == '0' || b[i] == '1')
	{
		result = (result << 1) | (b[i] - '0');
		i++;
	}
	else 
	{
		return 0;
	}
	}

    return result;
}
