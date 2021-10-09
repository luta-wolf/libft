NAME	=	libft.a

SRCS	= 	ft_isalnum.c	ft_isalpha.c	ft_isascii.c \
			ft_isdigit.c	ft_isprint.c	ft_strlen.c \
			ft_memset.c ft_bzero.c

HEADER	= 	libft.h

OBJ		=	$(SRCS:.c=.o)

CC		= 	gcc
CFLAGS	=	 -Wall -Wextra -Werror 

.PHONY	:	all clean fclean re bonus

all		:	$(NAME)

$(NAME)	:	$(OBJ)
			ar r $(NAME) $^

$(OBJ)	:	$(SRCS) $(HEADER)
			$(CC) $(FLAFS) -c $(SRCS)

bonus	:
			@make OBJ = "$(OBJ_B)" all

clean	:
			rm -rf $(OBJ)

fclean	:	clean
			rm -rf $(NAME)

re		:	fclean all		