/*
** my_putstr.c for  in /home/isidor_t/Jour03/isidor_t/my_putstr
** 
** Made by ISIDOR Teddy
** Login   <isidor_t@etna-alternance.net>
** 
** Started on  Fri Apr  3 09:15:37 2015 ISIDOR Teddy
** Last update Fri Apr  3 14:40:55 2015 ISIDOR Teddy
*/

char my_putchar(char c);

void my_putstr(char *str)
{
  while (*str != '\0')
  {
    my_putchar(*str);
    str = str + 1;
  }
}
