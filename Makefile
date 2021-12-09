NAME = libftprintf.a

SRCS	= ft_printf.c ft_putchar.c ft_putstr.c ft_putint.c ft_putuint.c \
		ft_puthexupper.c  ft_puthexlow.c ft_put_memory.c\

OBJS	= $(SRCS:.c=.o)

ICLS	= libftprintf.h

GCC		= gcc

FLGS	= -Wall -Wextra -Werror

LIB1	= ar -rcs

RM		= rm -f


all:		$(NAME)

$(NAME):	$(OBJS)
			$(LIB1) $(NAME) $(OBJS)

.c.o:
			$(GCC) $(FLGS) -I $(ICLS) -c $<

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all bonus clean fclean re

