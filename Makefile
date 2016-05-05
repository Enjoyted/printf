SRC =	main.c \
        functions.c \
        functions2.c

NAME =	printf
NAMEShared = libprintf
OBJO =	$(SRC:%.c=%.o)
OBJC =	$(SRC)
CFLAGS = -W -Werror -Wall

all:	$(NAME)

$(NAME):	$(OBJO)
	gcc -W -Werror -Wall $(OBJO) -o $(NAME) -L./lib_src/ -lmy

$(NAMEShared):	$(OBJO).so
	gcc -W -Werror -Wall $(OBJO) -o $(NAME) -L./lib_src/ -lmy -shared

my_printf_static:
	ar rcs lib$(NAME).a $(OBJO)
	ranlib lib$(NAME).a

my_printf_dynamic:
	$(NAMEshared)

clean:
	rm -f $(OBJO)
fclean:		clean
	rm -f $(NAME)
	rm -f printf libprintf.a

re:	fclean all