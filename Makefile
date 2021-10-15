NAME	=	libft.a

SRCS	= 	ft_isalnum.c	ft_isalpha.c	ft_isascii.c \
			ft_isdigit.c	ft_isprint.c	ft_strlen.c \
			ft_memset.c 	ft_bzero.c		ft_memcpy.c \
			ft_memmove.c	ft_strlcpy.c	ft_strlcat.c \
			ft_toupper.c	ft_tolower.c	ft_strchr.c \
			ft_strrchr.c	ft_strncmp.c	ft_memchr.c \
			ft_memcmp.c		ft_strnstr.c	ft_atoi.c \
			ft_calloc.c		ft_strdup.c		ft_substr.c \
			ft_strjoin.c	ft_strtrim.c	ft_split.c \
			ft_itoa.c		ft_strmapi.c	ft_striteri.c \
			ft_putchar_fd.c	ft_putstr_fd.c	ft_putendl_fd.c \
			ft_putnbr_fd.c

SRCS_B	=	ft_lstnew.c

HEADER	= 	libft.h

OBJ		=	$(SRCS:.c=.o)

OBJ_B	=	$(SRCS_B:.c=.0)

CC		= 	gcc
CFLAGS	=	 -Wall -Wextra -Werror

.PHONY	:	all clean fclean re bonus

all		:	$(NAME)

$(NAME)	:	$(OBJ)
			ar r $(NAME) $^

$(OBJ)	:	$(SRCS) $(HEADER)
			$(CC) $(FLAFS) -c $(SRCS)

$(OBJ_B)	:	$(SRCS_B) $(HEADER)
			$(CC) $(FLAFS) -c $(SRCS)

bonus	:
			@make OBJ = "$(OBJ_B)" all

clean	:
			@rm -rf $(OBJ)

fclean	:	clean
			@rm -rf $(NAME)

re		:	fclean all
