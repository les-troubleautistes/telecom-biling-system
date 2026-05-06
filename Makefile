# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alexis_marechal <michalex37@proton.me>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/05 23:17:06 by alexis_marech     #+#    #+#              #
#    Updated: 2026/05/06 01:06:42 by alexis_marech    ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all:
	norminette src/
	gcc -o biling src/*.c 
clean:
	rm biling 
rebuild:
	rm biling
	norminette src/
	gcc -o biling src/*.c
run:
	./biling
check:
	norminette src/
