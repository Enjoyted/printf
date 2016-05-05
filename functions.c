#include "libmy.h"

int param_d(void *number)
{
  my_put_nbr((long)number);

  return (my_numlen((long)number));
}

int param_c(void *chr)
{
  my_putchar((long)chr);

  return (1);
}

int param_s(void *str)
{
  my_putstr((char *) str);

  return (my_strlen((char *) str));
}

int param_i(void *i)
{
  my_put_nbr((long)i);

  return (my_numlen((long)i));
}

int param_o(void *num)
{
  int rem, i=1, octal=0;
  int o;
  
  o = (long)num;
  while (o != 0)
    {
      rem = o % 8;
      o /= 8;
      octal += rem * i;
      i *= 10;
    }
  my_put_nbr(octal);

  return (my_numlen((long)octal));
}