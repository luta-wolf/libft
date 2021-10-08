;; ************************************************************************** ;;
;;                                                                            ;;
;;                                                        :::      ::::::::   ;;
;;   makefile                                           :+:      :+:    :+:   ;;
;;                                                    +:+ +:+         +:+     ;;
;;   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        ;;
;;                                                +#+#+#+#+#+   +#+           ;;
;;   Created: 2021/10/08 15:36:32 by einterdi          #+#    #+#             ;;
;;   Updated: 2021/10/08 20:30:59 by einterdi         ###   ########.fr       ;;
;;                                                                            ;;
;; ************************************************************************** ;;

NAME	=	libft.a

SRCS	= 	ft_isalnum.c ft_isalpha.c ft_isascii.c\
			ft_isdigit.c ft_isprint.c ft_strlen.c

HEADER	= 	libft.h

OBJ		=	$(patsubst %.c, %.o $(SRCS))

CC		= 	gcc
CFLAGS	=	 -Wall -Wextra -Werror -I$(HEADER)

.PHONY	:	all clean fclean re bonus

all		:	$(NAME)

$(NAME)	:	$(OBJ) $(HEADER)
		ar rcs $(NAME) $?
# $? - имена всех пререквизитов (разделенные пробелами), которые являются "более новыми", чем цель

%.o		:	%.c $(HEADER)
		$(CC) $(FLAFS) -c $< -o $@
# $< - Имя первого пререквизита.
# %@ - Имя файла цели правила. Если цель является элементом архива (archive member), то '%@' обозначает имя архивного файла.

bonus	:
		@make OBJ = "$(OBJ_B)" all

clean	:
		@rm -f = $(OBJ) $(OBJ_B)

fclean	:
		@$(RM) $(NAME)

re		:	fclean all		