/*#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/*int main(void)
{
int n;
int i;
int x;
for (x = 0 ; x <= 99 ; x++)
{
  for (n = 01 ; n <= 99 ; n++)
{
if (n <= x)
{
n = x + 1;
}
putchar(x + '0');
//putchar(n + '0');
//putchar(i + '0');
//if (i <= 9 && n <= 8 && x != 7)
//{
putchar(',');
putchar(' ');
//}
//}
}
putchar('\n');
return (0);
}*/

#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers,
 *        ranging from 0-99, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 98; num1++)
	{
		for (num2 = num1 + 1; num2 <= 99; num2++)
		{
			putchar((num1 / 10) + '0');
			putchar((num1 % 10) + '0');
			putchar(' ');
			putchar((num2 / 10) + '0');
			putchar((num2 % 10) + '0');

			if (num1 == 98 && num2 == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
