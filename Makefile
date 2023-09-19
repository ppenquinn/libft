# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nappalav <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/29 00:29:16 by nappalav          #+#    #+#              #
#    Updated: 2023/09/19 16:39:01 by nappalav         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
BONUS = libft_bonus.a
CC = cc
AR = ar
CFLAGS = -Wall -Wextra -Werror -c
ARFLAGS = -rcs

SRC = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
		ft_isprint.c ft_memchr.c ft_memcmp.c ft_memset.c ft_strchr.c \
		ft_strlen.c ft_strncmp.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_memcpy.c\
		ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_memmove.c ft_calloc.c ft_strdup.c\
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_putchar_fd.c ft_putstr_fd.c\
		ft_putendl_fd.c ft_itoa.c ft_putnbr_fd.c ft_strmapi.c ft_striteri.c
SRCBONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c\
			ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c\
			ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
OBJ = $(SRC:.c=.o)
OBJBONUS = $(SRCBONUS:.c=.o)

all:	$(NAME)

$(NAME):$(OBJ)
		$(AR) $(ARFLAGS) $(NAME) $(OBJ)

bonus: $(BONUS)

$(BONUS):$(OBJBONUS)
		$(AR) $(ARFLAGS) $(NAME) $(OBJBONUS)
		$(AR) $(ARFLAGS) $(BONUS) $(OBJBONUS)

%.o:	%.c
		$(CC) $(CFLAGS) $< -o $@

clean:
		rm -f $(OBJ) $(OBJBONUS)

fclean: clean
		rm -f $(NAME) $(BONUS)

re:	fclean all

.PHONY: re clean fclean all bonus
