/*
** my_add_list_to_list.c for  in /home/isidor_t/Jour10/isidor_t/my_add_list_to_list
** 
** Made by ISIDOR Teddy
** Login   <isidor_t@etna-alternance.net>
** 
** Started on  Fri Apr 10 13:02:40 2015 ISIDOR Teddy
** Last update Fri Apr 17 11:57:31 2015 ISIDOR Teddy
*/

#include <stdlib.h>
#include "struct.h"

void my_add_list_to_list(t_list **begin1, t_list *begin2)
{
  t_list *tmp;

  tmp = *begin1;
  while (tmp->next != NULL)
    tmp = tmp->next;
  tmp->next = begin2;
}
