/*
** my_strcpy.c for  in /home/isidor_t/Jour04/isidor_t/my_strcpy
** 
** Made by ISIDOR Teddy
** Login   <isidor_t@etna-alternance.net>
** 
** Started on  Mon Apr  6 10:54:31 2015 ISIDOR Teddy
** Last update Mon Apr  6 17:34:32 2015 ISIDOR Teddy
*/

char *my_strcpy(char *dest, char *src)
{
  int i;

  i = 0;
  while (src[i] != '\0')
  {
    dest[i] = src[i];
    i++;
  }
  dest[i] = '\0';
  return (dest);
}
