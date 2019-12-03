# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avogt <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/07 11:51:18 by avogt             #+#    #+#              #
#    Updated: 2019/12/03 08:59:12 by avogt            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Werror -Wextra
define SRC_NAME
ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c\
ft_isprint.c ft_itoa.c\
ft_calloc.c ft_strlcpy.c\
ft_memalloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c\
ft_memcpy.c ft_memdel.c ft_memmove.c ft_memset.c ft_putnbr_fd.c\
ft_putchar.c ft_putchar_fd.c ft_putstr.c ft_putstr_fd.c ft_putnbr.c\
ft_putendl.c ft_putendl_fd.c\
ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c ft_strclr.c ft_strcmp.c\
ft_strcpy.c ft_strdel.c ft_strdup.c ft_strequ.c ft_strnequ.c ft_striter.c\
ft_striteri.c ft_strjoin.c ft_strlen.c ft_strmap.c ft_strmapi.c\
ft_strncmp.c ft_strncpy.c ft_strnew.c ft_strnstr.c ft_strrchr.c\
ft_split.c ft_strstr.c ft_substr.c ft_strtrim.c ft_tolower.c\
ft_toupper.c
endef
define SRC_BONUS_NAME
ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c\
ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c\
ft_lstiter_bonus.c ft_lstmap_bonus.c
endef
OBJ_BONUS_NAME = $(SRC_BONUS:.c=.o)
SRC_BONUS = $(SRC_BONUS_NAME)
OBJ_BONUS = $(OBJ_BONUS_NAME)
OBJ_NAME = $(SRC:.c=.o)
SRC = $(SRC_NAME)
OBJ = $(OBJ_NAME)
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c
	gcc $(FLAGS) -o $@ -c $<

bonus : $(OBJ_BONUS)
	ar rc $(NAME) $(OBJ_BONUS)
	ranlib $(NAME)

clean : 
	rm -fv $(OBJ) $(OBJ_BONUS)

fclean:	clean
	rm -fv $(NAME)

re:	fclean all
