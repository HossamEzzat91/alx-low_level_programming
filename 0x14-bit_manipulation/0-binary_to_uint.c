#include "main.h"
/**
 *binary_to_unit - function convert binary to dec
 *@b:the input binary in digit form
 *Return:the decimal equivalent
 *
 * /
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	if (!b)
		return (0);
	while(*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		dec = dec * 2 +(*b++ - '0');
	}
	return (dec);
}
