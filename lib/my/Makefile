##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## task01
##

SRC	=	my_putchar.c	\
		my_strstr.c	\
		my_isneg.c	\
		my_strcmp.c	\
		my_put_nbr.c	\
		my_strncmp.c	\
		my_swap.c	\
		my_strupcase.c	\
		my_putstr.c	\
		my_strlowcase.c	\
		my_strlen.c	\
		my_strcapitalize.c	\
		my_getnbr.c	\
		my_str_isalpha.c	\
		my_sort_int_array.c	\
		my_str_isnum.c	\
		my_compute_power_rec.c	\
		my_str_islower.c	\
		my_compute_square_root.c	\
		my_str_isupper.c	\
		my_is_prime.c	\
		my_str_isprintable.c	\
		my_find_prime_sup.c	\
		my_showstr.c	\
		my_strcpy.c	\
		my_showmem.c	\
		my_strncpy.c	\
		my_strcat.c	\
		my_revstr.c	\
		my_strncat.c	\
		my_str_to_word_array.c	\
		printf/mp_2.c		\
		printf/mpf4.c		\
		printf/mpf5.c		\
		printf/mypf_3.c		\
		printf/my_printf_1.c	\
		printf/found_other.c

OBJ	=	$(SRC:.c=.o)

all:	maine

maine: $(OBJ)
	gcc -c $(SRC)
	ar rc libmy.a *.o
	cp -f libmy.a ../
	cp -f libmy.a ../..

clean:
	rm -f $(OBJ)
