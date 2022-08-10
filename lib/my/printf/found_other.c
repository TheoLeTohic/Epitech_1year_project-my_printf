/*
** EPITECH PROJECT, 2021
** found_other.c
** File description:
** found other one .c
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

int find_second(char *str, int i, int *t);

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

int other(char *str, int i, int *t)
{
    if (str[i] == ' ' || str[i] == '#' || str[i] == '+'
        || str[i] == '-' || str[i] == '0' || (str[i] > 47 && str[i] < 58)
        || str[i] == '.' || str[i] == 'b' || str[i] == 'u' || str[i] == 'o'
        || str[i] == 'c' || str[i] == 's' || str[i] == 'd'
        || str[i] == '%') {
    } else
        return 1;
    return 0;
}

int lenght_str(char *str)
{
    int i = 0;

    for (i; str[i] != '\0'; i++);
    return i;
}

int find_second(char *str, int i, int *t)
{
    for (i; my_s_printf(str, i, t) == 0; i++) {
        if (str[i + 1] == '.')
            return nnumber(str, i + 2);
    }
    return 0;
}
