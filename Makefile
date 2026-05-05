# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alexis_marechal <michalex37@proton.me>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/05 23:17:06 by alexis_marech     #+#    #+#              #
#    Updated: 2026/05/05 23:21:15 by alexis_marech    ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all:
	gcc -o biling src/*.c 
clean:
	rm biling 
rebuild:
	rm biling 
	gcc -o biling src/*.c
run:
	./biling
check:
	norminette src/
