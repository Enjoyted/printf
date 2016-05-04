/*
** my_find_elm_eq_in_list.c for  in /home/isidor_t/Jour10
** 
** Made by ISIDOR Teddy
** Login   <isidor_t@etna-alternance.net>
** 
** Started on  Fri Apr 10 09:28:40 2015 ISIDOR Teddy
** Last update Fri Apr 17 12:23:52 2015 ISIDOR Teddy
*/

#include <stdlib.h>
#include "struct.h"

void *my_find_elm_eq_in_list(t_list *begin, void *data_ref, int (*cmp)(), int w)
{
  while (begin != NULL)
    {
      if (cmp((w == 0) ? begin->fword : begin->wword, data_ref) == 0)
	{
	  return ((w == 0) ? begin->fword : begin->wword);
	}
      begin = begin->next;
    }
  return (NULL);
}
