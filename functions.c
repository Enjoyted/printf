#include "libmy.h"

char *param_d(void *number)
{
	my_put_nbr((int)number);
    return ("");
}

char *param_c(void *chr)
{
	my_putchar((char)chr);
    return ("");
}

char *param_s(void *str)
{
    return ((char *) str);
}

char *param_i(void *i)
{
	my_put_nbr((int)i);
	return ("");
}

char *param_o(void *num)
{
    int rem, i=1, octal=0;
    int o;

    o = (int)num;
    while (o != 0)
    {
        rem = o % 8;
        o /= 8;
        octal += rem * i;
        i *= 10;
    }
    my_put_nbr(octal);
    return ("");
}

char *param_u(void *u)
{
    my_put_nbr((unsigned int)u);
    return ("");
}