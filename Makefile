##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## task01
##

all:
	make -C lib/my
	cp lib/my/libmy.a ../..

clean:
	make clean -C lib/my

fclean: clean
	make fclean -C lib/my

re: fclean all
