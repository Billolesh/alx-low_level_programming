#include "3-calc_ops.h"
#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
*get_op_func - points to a function corresponding to the operator     
*@s: the operator
*Return: function pointer to corresponding operation                                      
*/
int (*get_op_func(char *s))(int, int)
{
int (*operation)(int, int);
if (s == NULL)
return (NULL);
if (*s == '+')
operation = &op_add;
else if (*s == '-')
operation = &op_sub;
else if (*s == '*')
operation = &op_mul;
else if (*s == '/')
operation = &op_div;
else if (*s == '%')
operation = &op_mod;
else
operation = NULL;
return (operation);
}
