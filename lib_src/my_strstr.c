/*
** my_strstr.c for  in /home/isidor_t/Jour04/isidor_t/my_strstr
** 
** Made by ISIDOR Teddy
** Login   <isidor_t@etna-alternance.net>
** 
** Started on  Wed Apr  8 10:14:07 2015 ISIDOR Teddy
** Last update Thu Apr  9 10:00:06 2015 ISIDOR Teddy
*/

char *my_strstr(char *str, char *to_find)
{
  int i;
  int c;

  i = 0;
  c = 0;
  if (str[0] == '\0' && to_find[0] == '\0')
    return ("");
  while (str[i] != '\0')
  {
    if (to_find[c] == '\0')
      return (&str[i - c]);
    if (str[i] == to_find[c])
      c++;
    else
      c = (str[i] == to_find[0]) ? 1 : 0;
    i++;
  }
  return ((i == c) ? (i == 0) ? "null\0" : &str[i - c] : "null\0");
}
