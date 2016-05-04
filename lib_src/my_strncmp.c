/*
** my_strncmp.c for  in /home/isidor_t/Jour04/isidor_t/my_strncmp
** 
** Made by ISIDOR Teddy
** Login   <isidor_t@etna-alternance.net>
** 
** Started on  Mon Apr  6 12:41:12 2015 ISIDOR Teddy
** Last update Mon Apr  6 19:30:37 2015 ISIDOR Teddy
*/

int my_strncmp(char *s1, char *s2, int n)
{
  int i;
  int diff;

  i = 0;
  diff = 0;
  while (((s1[i] != '\0') || (s2[i] != '\0')) && i < n)
  {
    if (s1[i] == '\0' ||  s2[i] == '\0')
    {
      return ((s1[i] == '\0') ? -1 : 1);
    }
    if (diff == 0)
      diff = (s1[i] == s2[i]) ? 0 : ((s1[i] < s2[i]) ? -1 : 1);
    i++;
  }
  return (diff);
}
