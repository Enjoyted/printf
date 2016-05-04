/*
** my_strncpy.c for  in /home/isidor_t/Jour04/isidor_t/my_strncpy
** 
** Made by ISIDOR Teddy
** Login   <isidor_t@etna-alternance.net>
** 
** Started on  Mon Apr  6 11:15:34 2015 ISIDOR Teddy
** Last update Mon Apr  6 17:48:24 2015 ISIDOR Teddy
*/

char *my_strncpy(char *dest, char *src, int n)
{
  int i;

  i = 0;
  while (src[i] != '\0' && i < n)
  {
    dest[i] = src[i];
    i++;
  }
  while (i < n)
  {
    dest[i] = '\0';
    i++;
  }
  return (dest);
}
