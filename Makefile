# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/01 19:32:54 by taboterm          #+#    #+#              #
#    Updated: 2022/11/12 16:16:48 by taboterm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = get_next_line.a

SRC = get_next_line.c get_next_line_utils.c get_next_line.h main.c\

OBJS = $(SRC:.c=.o)

CC = gcc
RM = rm -f
CFLAGS = -c -Wall -Wextra -Werror
INCLUDE = get_next_line.h

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	/bin/rm -f *.o *.a a.out
	
fclean: clean 
	/bin/rm -f *.o *.a a.out$(NAME)
	
re: fclean all

.PHONY: clean fclean all re