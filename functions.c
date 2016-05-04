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

int param_u(void *u)
{
  my_put_nbr((long)u);
  return (my_numlen((long)u));
}

int param_per(void *n)
{
  
  my_putchar(((long)n == -1)? (long)n : '%');
  return (1);
}

int param_X(void *no)
{
  int i;
  int n;
  char num[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
  char *out;
  
  n = (i = 0) + (long)no;
  while (n)
    {
      n /= 16;
      i++;
    }
  
  if ((out = malloc(sizeof(int) * i)) == NULL)
    return (-1);
  
  n = (i = 0) + (long)no;
  while (n)
    {
      out[i] = num[n % 16];
      n /= 16;
      i++;
    }
  
  while (i >= 0)
    {
      my_putchar(out[i]);
      i += -1;
    }

  return (i);
}

int param_x(void *no)
{ 
  int i;
  int n;
  char num[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
  char *out;
  
  n = (i = 0) + (long)no;
  while (n)
    {
      n /= 16;
      i++;
    }
  
  if ((out = malloc(sizeof(int) * i)) == NULL)
    return (-1);
  
  n = (i = 0) + (long)no;
  while (n)
    {
      out[i] = num[n % 16];
      n /= 16;
      i++;
    }
  
  while (i >= 0)
    {
      my_putchar(out[i]);
      i += -1;
    }
  
  return (i);
}
