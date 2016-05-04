/*
** my_find_node_elm_eq_in_list.c for  in /home/isidor_t/Jour10/isidor_t/my_find_node_elm_eq_in_list
** 
** Made by ISIDOR Teddy
** Login   <isidor_t@etna-alternance.net>
** 
** Started on  Fri Apr 10 10:01:58 2015 ISIDOR Teddy
** Last update Fri Apr 17 12:25:33 2015 ISIDOR Teddy
*/

#include <stdlib.h>
#include "struct.h"

t_list *my_find_node_elm_eq_in_list(t_list *begin, void *data_ref, 
				    int (*cmp)(), int w)
{
  while (begin != NULL)
    {
      if (cmp((w == 0) ? begin->fword : begin->wword, data_ref) == 0)
	{
	  return (begin);
	}
      begin = begin->next;
    }
  return (NULL);
}
