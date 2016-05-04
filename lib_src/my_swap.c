/*
** my_swap.c for  in /home/isidor_t/Jour03/isidor_t/my_swap
** 
** Made by ISIDOR Teddy
** Login   <isidor_t@etna-alternance.net>
** 
** Started on  Fri Apr  3 11:06:55 2015 ISIDOR Teddy
** Last update Fri Apr  3 11:40:00 2015 ISIDOR Teddy
*/

void my_swap(int *a, int *b)
{
  int x;

  x = *a;
  *a = *b;
  *b = x;
}
