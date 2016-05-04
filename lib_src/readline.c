/*
** readline.c for  in /home/isidor_t/demineur
** 
** Made by ISIDOR Teddy
** Login   <isidor_t@etna-alternance.net>
** 
** Started on  Mon Apr 13 10:48:52 2015 ISIDOR Teddy
** Last update Mon Apr 13 11:43:46 2015 ISIDOR Teddy
*/

#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

char  *readLine()
{
  ssize_t  ret;
  char     *buff;

  if ((buff = malloc(sizeof(*buff) * (50 + 1))) == NULL)
    return (NULL);
  if ((ret = read(0, buff, 50)) > 1)
    {
      buff[ret - 1] = '\0';
      return (buff);
    }
  buff[0] = '\0';
  return (buff);
}
