#ifndef __LIBMY__
#define __LIBMY__
 
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

typedef struct s_list
{
    void *fword;
    void *wword;
    struct s_list *next;
} t_list;

void my_putchar(char c);
int my_isneg(int n);
void my_put_nbr(int nb);
void my_swap(int *a, int *b);
void my_putstr(char *str);
int my_strlen(char *str);
int my_getnbr(char *str);
char *my_strcpy(char *dest, char *src);
char *my_strncpy(char *dest, char *src, int n);
int my_strcmp(char *s1, char *s2);
int my_strncmp(char *s1, char *s2, int n);
char *my_strcat(char *str1, char *str2);
char *my_strncat(char *str1, char *str2, int n);
char *my_strstr(char *str, char *to_find);
char *my_strdup(char *str);
char **my_str_to_wordtab(char *str);
void my_sort_list(t_list **begin, int (*cmp)(), int w);
t_list *my_find_node_elm_eq_in_list(t_list *begin, void *data_ref, int (*cmp)(), int w);
void my_add_list_to_list(t_list **begin1, t_list *begin2);
int my_list_size(t_list *begin);
char *readLine();
void ajout_def(t_list **dico);
void wesh_to_fr(t_list **dico);
void fr_to_wesh(t_list **dico);
void aff_dico_wesh(t_list **dico);
void aff_dico_fr(t_list **dico);
char *param_d(void *number);
char *param_c(void *chr);
char *param_s(void *str);
char *param_i(void *i);
char *param_o(void *o);
char *param_u(void *u);
#endif
