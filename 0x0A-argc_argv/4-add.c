#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc:no of args
 * @argv: value of args
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int result = 0;
int i;
int num = 0;
if (argc == 1)
{
printf("%d\n", 0);
return (0);
}
for (i = 1; i < argc; i++)
{
num = atoi(argv[i]);
if (num == 0 && argv[i][0] != '0')
{
printf("Error\n");
return (1);
}
result += num;
}
printf("%d\n", result);
return (0);
}
