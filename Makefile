# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecozturk <ecozturk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/07 18:05:34 by ecozturk          #+#    #+#              #
#    Updated: 2023/03/11 12:56:46 by ecozturk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME1 = server

NAME2 = client

all :
	@make -C ./utils
	@gcc -Wall -Wextra -Werror server.c ./utils/libftprintf.a -o $(NAME1)
	@gcc -Wall -Wextra -Werror client.c ./utils/libftprintf.a -o $(NAME2)

clean :
	@make clean -C ./utils
	@rm -rf client.o server.o

fclean : clean
	@make fclean -C ./utils
	@rm -rf $(NAME1) $(NAME2)

server:
	@./server

re : fclean all

.PHONY: all clean fclean re server