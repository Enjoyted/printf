#include "libmy.h"

int my_printf(char *str, ...)
{
   va_list ap;
   int i;
   char *(*p[123]) (void *y);

    p['s'] = &param_s;
    p['c'] = &param_c;
    p['i'] = &param_i;
    p['d'] = &param_d;
    p['o'] = &param_o;
    // p['u'] = &param_u; bugged
    // p['x'] = param_x;
    // p['X'] = param_X;
   va_start(ap, str);
   i = 0;
   while (str[i] != '\0')
   {
    if (str[i + 1] != '\0' && str[i] == '%')
      my_putstr(p[(int)str[(i += 1)]](va_arg(ap, void *)));
    else 
      my_putchar(str[i]);
    i++;
   }

   va_end(ap);
   return (0);
}

int main()
{
  my_printf("1 %d %c %s %i %o\n", 'l', 'c', "dope", 4, 42);
  printf("1 %d %c %s %i %o\n", 'l', 'c', "dope", 4, 42); 
  return (0);
}
