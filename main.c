#include "libmy.h"


int my_numlen(int n)
{
  return ((n < 10) ? 1 : my_numlen(n / 10) + 1);
}

int my_printf(char *str, ...)
{
  va_list ap;
  int i;
  int (*p[123]) (void *y);
  int size;
  
  p['s'] = &param_s;
  p['c'] = &param_c;
  p['i'] = &param_i;
  p['d'] = &param_d;
  p['o'] = &param_o;
  p['x'] = &param_x;
  p['X'] = &param_X;
  p['u'] = &param_u;
  p['%'] = &param_per;
  
  va_start(ap, str);
  size = (i = 0);
  while (str[i] != '\0')
    {
      if (str[i + 1] != '\0' && str[i] == '%')
	size += p[(int)str[(i += 1)]](va_arg(ap, void *));
      else
	{
	  my_putchar(str[i]);
	  size += 1;    
	}
      i++;
    }
  
  va_end(ap);
  return (size);
}

int main()
{
  my_put_nbr(my_printf("1 %d %c %s %i %o\n", 'l', 'c', "dope", 4, 42));
  my_putchar('\n');
  my_put_nbr(printf("1 %d %c %s %i %o\n", 'l', 'c', "dope", 4, 42));
  my_putchar('\n');  
  
  my_put_nbr(printf("1 %x %X %d%%\n", 5859, 9856, 85416));
  my_putchar('\n');
  my_put_nbr(my_printf("1 %x %X %d%%\n", 5859, 9856, 85416));
  my_putchar('\n');
  
  my_putchar('\n');
  my_put_nbr(my_printf("1 %o\n", 42));
  my_putchar('\n');
  my_put_nbr(my_printf("1 %u\n", 4200000000));
  return (0);
}
