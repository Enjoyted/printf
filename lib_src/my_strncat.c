/*
** my_strncat.c for  in /home/isidor_t/Jour04/isidor_t/my_strncat
** 
** Made by ISIDOR Teddy
** Login   <isidor_t@etna-alternance.net>
** 
** Started on  Mon Apr  6 13:30:53 2015 ISIDOR Teddy
** Last update Mon Apr  6 13:34:57 2015 ISIDOR Teddy
*/

char *my_strncat(char *str1, char *str2, int n)
{
  int i;
  int ii;

  i = 0;
  while (str1[i] != '\0')
  {
    i++;
  }
  ii = 0;
  while (str2[ii] != '\0' && ii < n)
  {
    str1[i] = str2[ii];
    i++;
    ii++;
  }
  return (str1);
}
