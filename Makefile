# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jomaia <jomaia@student.42lisboa.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/30 11:51:36 by joaomaia          #+#    #+#              #
#    Updated: 2025/05/12 14:32:42 by jomaia           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libftprintf.a
SRCS= ft_printf.c ft_putchar.c ft_puthex.c ft_putnbr.c ft_putptr.c\
		ft_putstr.c ft_unsputnbr.c 
COMP_LIB= ar rcs

COMP_LIB= ar -rcs
RM= rm -f
CC= cc
CC_FLAGS= -Wall -Wextra -Werror

OBJS= $(SRCS:.c=.o)

%.o : %.c
	$(CC) $(CC_FLAGS) -c $< -o $@

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

$(NAME): $(OBJS)
	$(COMP_LIB) $(NAME) $(OBJS)

.PHONY: all clean fclean re
