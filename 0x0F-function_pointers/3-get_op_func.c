#include "3-calc.h"
/**
 * array_iterator - writes the character c to stdout
 * @array: pointer to anme
 * @action:function pointer
 * @size:array size
 * Return: void.
 *
 */
int (*get_op_func(char *s))(int, int)
{
 op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i = 0;
    while (i< 5)
      {
	if(s != 0 && s[0] == ops[i].op[0] && !s[1])
	  {
	    return(ops[i].f);
	  }
	i++;
      }
    return (NULL);
}
