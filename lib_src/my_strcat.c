/*
** my_strcat.c for  in /home/isidor_t/Jour04/isidor_t/my_strcat
** 
** Made by ISIDOR Teddy
** Login   <isidor_t@etna-alternance.net>
** 
** Started on  Mon Apr  6 12:56:45 2015 ISIDOR Teddy
** Last update Mon Apr  6 13:29:47 2015 ISIDOR Teddy
*/

char *my_strcat(char *str1, char *str2)
{
  int i;
  int ii;

  i = 0;
  while (str1[i] != '\0')
  {
    i++;
  }
  ii = 0;
  while (str2[ii] != '\0')
  {
    str1[i] = str2[ii];
    i++;
    ii++;
  }
  return (str1);
}
