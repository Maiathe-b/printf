# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jomaia <jomaia@student.42lisboa.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/30 11:51:36 by joaomaia          #+#    #+#              #
<<<<<<< HEAD
#    Updated: 2025/05/06 06:34:18 by jomaia           ###   ########.fr        #
=======
#    Updated: 2025/05/06 06:07:46 by jomaia           ###   ########.fr        #
>>>>>>> 5d5c59b (printf finished and tested)
#                                                                              #
# **************************************************************************** #

NAME= ft_printf.a
SRCS= ft_printf.c ft_putchar.c ft_puthex.c ft_putnbr.c ft_putptr.c\
<<<<<<< HEAD
		ft_putstr.c ft_unsputnbr.c 
COMP_LIB= ar rcs
=======
		ft_putstr.c ft_unsputnbr.c main.c

COMP_LIB= ar -rcs
>>>>>>> 5d5c59b (printf finished and tested)
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
