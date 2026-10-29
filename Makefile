NAME	=	libftprintf.a
CC	=	cc
CFLAGS	=	-Wall -Wextra -Werror 
AR	=	ar rcs

SRC		= check_format.c ft_printf.c print_char.c print_decimal.c print_hix.c \
        print_HIX.c print_pointer.c print_str.c print_uns_int.c
OBJS	= $(SRC:.c=.o)

all :$(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all


.PHONY: all clean fclean re
