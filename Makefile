# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alexis_marechal <michalex37@proton.me>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/06 13:42:13 by alexis_marech     #+#    #+#              #
#    Updated: 2026/05/06 13:42:13 by alexis_marech    ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alexis_marechal <michalex37@proton.me>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Updated: 2026/05/06 01:04:48 by selkij           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all:
	norminette src/
	gcc -o billing src/*.c 
clean:
	rm billing 
rebuild:
	rm biling
	norminette src/
	gcc -o biling src/*.c 
run:
	./billing
check:
	norminette src/
