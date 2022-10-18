#include "main.h"
/**
* arus - search and return the correct function
* @s: array to check
* Return: return a function (if written correctly)
**/
int (*arus(char s))(va_list)
{
	op_t ops[] = {
		{"c", print_c},
		{"s", print_s},
		{"d", print_d},
		{"i", print_i},
		{"b", print_b},
		{"o", print_o},
		{"x", print_x},
		{"X", print_X},
		{"p", print_p},
		{"S", print_S},
		{"r", print_r},
		{"R", print_R},
		{"u", print_u},
		{"b", print_b},
		{NULL, NULL}
	};

	int i;

	for (i = 0; ops[i].c != NULL; i++)
	{
		if (*ops[i].c == s)
			return (ops[i].f);
	}
	return (NULL);
}
