# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joaomaia <joaomaia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/30 11:51:36 by joaomaia          #+#    #+#              #
#    Updated: 2025/04/30 11:55:26 by joaomaia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libftprintf.a
SRCS= 

COMP_LIB= ar -rcs
RM= rm -f
CC= cc
CC_FLAGS= -Wall -Wextra -Werror

OBJS= $(SRCS:.c=.o)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

$(OBJS):
	$(CC) $(CC_FLAGS) $(ADD)



$(NAME): $(OBJS)
	$(COMP_LIB) $(NAME) $(OBJS)