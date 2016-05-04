/*
** my_getnbr.c for  in /home/isidor_t/Jour05/isidor_t/my_getnbr
** 
** Made by ISIDOR Teddy
** Login   <isidor_t@etna-alternance.net>
** 
** Started on  Sat Apr  4 11:15:58 2015 ISIDOR Teddy
** Last update Sat Apr  4 13:11:27 2015 ISIDOR Teddy
*/

int my_getnbr(char *str)
{
  int    i;
  int    neg;
  int    n;

  neg = 1;
  i = 0;
  while (str[i] != '\0' && (str[i] == '+' || str[i] == '-'))
  {
    if (str[i] == '-')
    {
	neg = neg * -1;
    }
    i++;
  }
  n = 0;
  while (str[i] >= 48 && str[i] <= 57)
  {
    n = (n * 10) + str[i] - 48;
    i++;
  }
  return (n * neg);
}
