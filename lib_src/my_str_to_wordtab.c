/*
** my_str_to_wordtab.c for  in /home/isidor_t/Jour07/isidor_t/my_str_to_wordtab
** 
** Made by ISIDOR Teddy
** Login   <isidor_t@etna-alternance.net>
** 
** Started on  Tue Apr  7 12:26:29 2015 ISIDOR Teddy
** Last update Sat Apr 18 11:02:19 2015 ISIDOR Teddy
*/

#include <stdlib.h>
#include "struct.h"
char *my_strdupp(char *str)
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

int my_words_ammount(char *str)
{
  int i;
  int cpt;

  cpt = 0;
  i = 0;
  while (str[i] != '\0')
  {
    if ((str[i] >= 48 && str[i] <= 57) 
	|| (str[i] >= 65 && str[i] <= 90)
	|| (str [i] >= 97 && str[i] <= 122))
    {
      cpt++;
      while ((str[i] >= 48 && str[i] <= 57)
	     || (str[i] >= 65 && str[i] <= 90)
	     || (str [i] >= 97 && str[i] <= 122))
	i++;
    }
    else
      i++;
  }
  return (cpt);
}

int my_chars_ammount(char *str, int i)
{
  int cpt;

  cpt = 0;
  while (str[i] && ((str[i] >= 48 && str[i] <= 57)
		     || (str[i] >= 65 && str[i] <= 90)
		     || (str[i] >= 97 && str[i] <= 122)))
  {
    cpt = cpt + 1;
    i = i + 1;
  }
  return (cpt);
}

char **my_str_to_wordtab(char *str)
{
  int i;
  int n;
  int words;
  int wordsize;
  char **arr;
  words = my_words_ammount(str);
  i = 0;
  n = 0;
  arr = (char **)malloc(sizeof(char *) * (words + 1));
  while (words > 0 && str[i])
  {
      if ((str[i] >= 48 && str[i] <= 57) || (str[i] >= 65 && str[i] <= 90)
	  || (str [i] >= 97 && str[i] <= 122))
      {
     	wordsize = my_chars_ammount(str, i);
	arr[n] = my_strdupp(str + i);
	arr[n][wordsize] = '\0';
	n++;
	words--;
	i += wordsize;
      }
    i++;
  }
  arr[my_words_ammount(my_strdupp(str))] = NULL;
  return (arr);
}
