/*
** my_sort_list.c for  in /home/isidor_t/Jour10/isidor_t/my_sort_list
** 
** Made by ISIDOR Teddy
** Login   <isidor_t@etna-alternance.net>
** 
** Started on  Fri Apr 10 16:14:53 2015 ISIDOR Teddy
** Last update Fri Apr 17 12:19:51 2015 ISIDOR Teddy
*/

#include <stdlib.h>
#include "struct.h"

int my_list_size(t_list *begin)
{
  int i;
  t_list *tmp;

  i = 0;
  tmp = begin;
  while (tmp != NULL)
    {
      tmp = tmp->next;
      i++;
    }
  return (i);
}

void save_back(t_list **prev, t_list **next)
{
  if ((*prev) != NULL)
    (*prev)->next = *next;
}

void savFirst(t_list **first, t_list **curr, int state)
{
  if(state == 1)
  {
    *first = *curr;
  }
}

void init_vars(t_list **curr, t_list **begin, t_list **prev)
{
  *curr = *begin;
  *prev = NULL;
}

void my_sort_list(t_list **begin, int (*cmp)(), int w)
{
  t_list *prev;
  t_list *next;
  t_list *curr;
  t_list *first;
  int c;
  c = my_list_size(*begin);
  while (c != 0)
  {
    init_vars(&curr, begin , &prev);
    while (curr->next != NULL)
    {
      next = curr->next;
      if (cmp((w == 0) ? curr->fword : curr->wword, (w == 0) ? next->fword : next->wword ) > 0)
      {
	curr->next = next->next;
	next->next = curr;
	save_back(&prev, &next);
	curr = next;
      }
      (prev == NULL) ? savFirst(&first, &curr, 1) : savFirst(&first, &curr, 0);
      prev = curr;
      curr = curr->next;
    }
    *begin = first;
    c--;
  }
}
