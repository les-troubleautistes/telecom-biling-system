# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alexis_marechal <michalex37@proton.me>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/05 23:17:06 by alexis_marech     #+#    #+#              #
#    Updated: 2026/05/06 01:04:48 by selkij           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all:
	norminette src/
	gcc -o billing src/*.c 
clean:
	rm billing 
rebuild:
	rm billing 
	gcc -o billing src/*.c
run:
	./billing
check:
	norminette src/
