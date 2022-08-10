/*
** EPITECH PROJECT, 2021
** my_printf.c
** File description:
** my own printf
*/

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int without_moin(long long a, int nb2, int lenght, int zero, int plus);

int print_str(int nb2, int lenght, char *b);

int with_moin(long long a, int nb2, int lenght, int zero, int plus);

int print_sizeone(char *str, int i, int lenght, int chara);

int width(char *str, int i, va_list ap, int *t);

int my_flags(va_list ap, char *str, int i);

int fill_point(char *str, int i, int zero);

int find_second(char *str, int i);

int  m(va_list ap, char *str, int i);

int my_printf(char *str, ...);

int hastag(char c);

int nnumber(char *str, int i);

int lenght_str(char *str);

int  my_s_printf(char *str, int i, int *t);

int cell_blank(int lenght, int zero);

char *my_revstr(char *str);

void my_putchar2(char c);

void int_to_str(int nb);

int int_to_lenght(int nb);

int str_to_lenght(char *str);

void my_putstr2(char *str);

int base_deux(int nbr);

char *base_seize(int nbr);

int base_huit(int nbr);

char *my_revstr(char *str)
{
    return str;
}

void my_putchar2(char c)
{
    write(1, &c, 1);
}

void int_to_str(int nb)
{
    int temp = 0;

    if (nb == 0)
        return;
    temp = nb % 10;
    nb = nb / 10;
    int_to_str(nb);
    my_putchar2(temp + 48);
}

int int_to_lenght(int nb)
{
    if (nb == 0)
        return 0;
    nb = nb / 10;
    return (1 + int_to_lenght(nb));
}

int str_to_lenght(char *str)
{
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}
