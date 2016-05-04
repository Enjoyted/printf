/*
** my_strcmp.c for  in /home/isidor_t/Jour04/isidor_t/my_strcmp
** 
** Made by ISIDOR Teddy
** Login   <isidor_t@etna-alternance.net>
** 
** Started on  Mon Apr  6 11:44:09 2015 ISIDOR Teddy
** Last update Tue Apr  7 09:31:47 2015 ISIDOR Teddy
*/

int my_strcmp(char *s1, char *s2)
{
  int i;
  int diff;

  diff = 0;
  i = 0;
  while (s1[i] != '\0' ||  s2[i] != '\0')
  {
    if (s1[i] == '\0' ||  s2[i] == '\0')
    {
      return ((s1[i] == '\0') ? -1 : 1);
    }
    if (diff == 0)
      diff = (s1[i] == s2[i]) ? 0 : ((s1[i] < s2[i]) ? -1 : 1);
    else
      break;
    i++;
  }
  return (diff);
}
