/*
** my_strdup.c for  in /home/isidor_t/Jour07/isidor_t/my_strdup
** 
** Made by ISIDOR Teddy
** Login   <isidor_t@etna-alternance.net>
** 
** Started on  Tue Apr  7 11:30:09 2015 ISIDOR Teddy
** Last update Tue Apr  7 19:18:17 2015 ISIDOR Teddy
*/

#include <stdlib.h>

char *my_strdup(char *str)
{
  int i;
  char *string;
  int c;

  c = 0;
  while (str[c++] != '\0');

  string = malloc(sizeof(char) * (c + 1));
  i = 0;
  while (str[i] != '\0')
  {
    string[i] = str[i];
    i++;
  }
  string[i] = '\0';
  return (string);
}
