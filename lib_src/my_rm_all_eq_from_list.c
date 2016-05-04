/*
** my_rm_all_eq_from_list.c for  in /home/isidor_t/Jour10/isidor_t/my_rm_all_eq_from_list
** 
** Made by ISIDOR Teddy
** Login   <isidor_t@etna-alternance.net>
** 
** Started on  Fri Apr 10 10:13:06 2015 ISIDOR Teddy
** Last update Fri Apr 17 12:21:47 2015 ISIDOR Teddy
*/

#include <stdlib.h>
#include "struct.h"

void my_rm_all_eq_from_list(t_list **begin, void *data_ref, int (*cmp)(), int w)
{
  t_list *nextNode;
  t_list *prevNode;
  t_list *currNode;
  t_list *toFree;

  currNode = *begin;
  prevNode = NULL;
  while (currNode != NULL)
  {
    if (cmp((w == 0) ? currNode->fword : currNode->wword, data_ref) == 0)
    {
      nextNode = (currNode->next != NULL) ? currNode->next : NULL;
      if (prevNode != NULL)
	prevNode->next = nextNode;
      else
	*begin = currNode->next;
      toFree = currNode;
      currNode = currNode->next;
      free(toFree);
      continue;
    }
    prevNode = currNode;
    currNode = currNode->next;
  }
}
