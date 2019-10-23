#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - get operator
 * @s: symbol which make the operation
 * Return: the operation to be done
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

	int i;

	i = 0;
	while ((ops[i].op[0] != *s) && (i <= 4))
		i++;
	return (ops[i].f);
}
