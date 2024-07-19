# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: junguyen <junguyen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/09 13:07:01 by junguyen          #+#    #+#              #
#    Updated: 2024/07/15 14:33:36 by junguyen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	push_swap

CC =	cc 

CFLAGS = -Wall -Werror -Wextra -g

SRC_PATH = srcs/

SRC =	init_lst.c main.c instructions.c algorithm.c error.c \
		print_list.c \

SRCS = $(addprefix $(SRC_PATH), $(SRC))
		
OBJ = $(SRCS:.c=.o)

LIBFT = libft

$(NAME): $(OBJ)
		@make -C $(LIBFT)
		@$(CC) $(CFLAGS) $(OBJ) ./libft/libft.a -o $(NAME)
		@echo "push_swap created"
	
all: $(NAME)

clean:
		@rm -f $(OBJ)
		@make clean -C $(LIBFT)
		@echo "objects cleaned"

fclean: clean
		@rm -f $(NAME) libft.a
		@make fclean -C $(LIBFT)
		@echo "all clean"
	
re: fclean all

.PHONY: all clean fclean re
