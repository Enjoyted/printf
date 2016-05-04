/*
** my_strlen.c for  in /home/isidor_t/Jour03/isidor_t/my_strlen
** 
** Made by ISIDOR Teddy
** Login   <isidor_t@etna-alternance.net>
** 
** Started on  Fri Apr  3 10:20:00 2015 ISIDOR Teddy
** Last update Fri Apr  3 10:26:52 2015 ISIDOR Teddy
*/

int my_strlen(char *str)
{
  int i;

  i = 0;
  while (*str != '\0')
  {
    str = str + 1;
    i++;
  }
  return (i);
}
