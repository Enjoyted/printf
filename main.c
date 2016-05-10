#include "libmy.h"


int my_numlen(int n)
{
  return ((n < 10) ? 1 : my_numlen(n / 10) + 1);
}

void init_array(int (**p)(void*), int size)
{
  int i;

  i = 0;
  while (i < size)
    p[(i++)] = NULL;
  p['s'] = &param_s;
  p['c'] = &param_c;
  p['i'] = &param_i;
  p['d'] = &param_d;
  p['o'] = &param_o;
  p['x'] = &param_x;
  p['X'] = &param_X;
  p['u'] = &param_u;
  p['%'] = &param_per;
}

int my_printf(char *str, ...)
{
  va_list ap;
  int i;
  int (**p)(void*);
  int size;

  p = malloc(123 * sizeof(*p));
  init_array(p, 123);
  va_start(ap, str);
  size = (i = 0);
  for (i = 0; str[i] != '\0'; ++i)
  {
    if (str[i + 1] != '\0' && str[i] == '%')
      if (p[(int) str[i + 1]] != NULL)
        size += p[(int)str[(i += 1)]](va_arg(ap, void *));
      else
      {
        my_putstr("\x1b[31m %ERROR\x1b[0m");
        ++i;
      }
    else
    {
      my_putchar(str[i]);
      ++size;
    }
  }
  va_end(ap);
  free(p);
 
  return (size);
}

int main()
{
  my_printf("1 - une chaine\n");
  my_printf("2 - %s\n", "une autre chaine");
  my_printf("3 - %i\n", 42);
  my_printf("4 - %s %d %s%c", "avec", 4, "parametres", '\n');
  my_printf("1 - %o\n", 42);         // unsigned octal
  my_printf("2 - %u\n", 4200000000); // unsigned decimal
  my_printf("3 - %x\n", 42);         // unsigned hexadecimal
  my_printf("4 - %X\n", 42);         // unsigned hexadecimal
  my_printf("5 - %d%%\n", 42);
  my_printf("6 - %d%% %w %v cat\n", 42); // error handling
  return (0);
}