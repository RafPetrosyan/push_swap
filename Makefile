# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rafpetro <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/13 14:11:23 by rafpetro          #+#    #+#              #
#    Updated: 2024/07/13 14:11:28 by rafpetro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Wextra -Werror -I$(INCS)

SRCS = push_swap.c push_swap_utils.c ft_split.c operations1.c operations2.c \
	sort_utils1.c sort_utils2.c push_stack.c validacia.c stack_functions.c

INCS = ./

NAME = push_swap

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) Makefile push_swap.h
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

.o: .c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean 
	rm -f $(NAME)

re: fclean all

.PHONY: all fclean clean re
