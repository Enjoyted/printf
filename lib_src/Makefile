NAME =  libmy
SRC = my_add_list_to_list.c \
      my_find_node_elm_eq_in_list.c \
      my_getnbr.c \
      my_isneg.c \
      my_list_size.c \
      my_put_nbr.c \
      my_putchar.c \
      my_putstr.c \
      my_rm_all_eq_from_list.c \
      my_sort_list.c \
      my_strcat.c \
      my_strcmp.c \
      my_strcpy.c \
      my_strdup.c \
      my_strlen.c \
      my_strncat.c \
      my_strncmp.c \
      my_strncpy.c \
      my_strstr.c \
      my_swap.c \
      readline.c
OBJ =   $(SRC:%.c=%.o)
RM =    rm -f
CFLAGS = -W -Wall -Werror

$(NAME):        $(OBJ)
		ar r $(NAME).a $(OBJ)
		ranlib $(NAME).a

all:    $(NAME)

clean:
	$(RM) $(OBJ)

fclean:         clean
	$(RM) $(NAME).a
re:     fclean all