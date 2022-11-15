# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: melhajja <melhajja@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 18:59:12 by melhajja          #+#    #+#              #
#    Updated: 2022/11/10 11:37:58 by melhajja         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = 	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c \
		ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
		ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c \
		ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c \
		ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c \
		ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c \
		ft_tolower.c ft_toupper.c
SRC_BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstadd_back_bonus.c \
			ft_lstsize_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c \
			ft_lstlast_bonus.c ft_lstmap_bonus.c ft_lstiter_bonus.c


CFLAGS = -Wall -Wextra -Werror

OFILES = $(SRCS:.c=.o)

B_OFILES = $(SRC_BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OFILES)
	ar -rc $(NAME) $(OFILES)

bonus: $(B_OFILES) $(OFILES)
	ar -rc $(NAME) $^
clean:
		rm -f $(OFILES) $(B_OFILES)
fclean: clean
		rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re bonus