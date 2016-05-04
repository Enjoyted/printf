/*
** my_put_nbr.c for  in /home/isidor_t/Jour05/my_put_nbr
** 
** Made by ISIDOR Teddy
** Login   <isidor_t@etna-alternance.net>
** 
** Started on  Sat Apr  4 09:14:50 2015 ISIDOR Teddy
** Last update Mon Apr  6 20:19:25 2015 ISIDOR Teddy
*/

char my_putchar(char c);

int isneg(int n)
{
  if (n < 0)
  {
    if (n == -2147483648)
    {
      my_putchar('-');
      my_putchar('2');
      my_putchar('1');
      my_putchar('4');
      my_putchar('7');
      my_putchar('4');
      my_putchar('8');
      my_putchar('3');
      my_putchar('6');
      my_putchar('4');
      my_putchar('8');
      n = n * - 1;
    }
    else
    {
      my_putchar('-');
      n = n * - 1;
    }
  }
  return (n);
}

void rotate(int nl, char str[15])
{
  int c;
  int f;

  f = 0;
  c = 0;
  while (str[c] != 64 && f == 0)
  {
    if (c == nl - 1)
    {
      while (c >= 0)
      {
	my_putchar(48 + str[c]);
	c--;
      }
      f = 1;
    }
    c++;
  }
}

void my_put_nbr(int n)
{
  int dig;
  char str[15];
  int i;

  (n != 0) ? n = isneg(n) : my_putchar(48);
  i = 0;
  while (n && n != -2147483648)
  {
    dig = n % 10;
    n /= 10;
    str[i] = dig;
    i++;
  }
  rotate(i, str);
}
