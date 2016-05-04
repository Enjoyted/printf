/*
** my_putchar.c for  in /home/isidor_t/Jour01/isidor_t/my_putchar
** 
** Made by ISIDOR Teddy
** Login   <isidor_t@etna-alternance.net>
** 
** Started on  Wed Apr  1 17:32:25 2015 ISIDOR Teddy
** Last update Wed Apr  1 17:33:38 2015 ISIDOR Teddy
*/

#include <unistd.h>

void my_putchar(char c)
{
  write(1, &c, 1);
}
