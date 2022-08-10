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

int nnumber(char *str, int i)
{
    int j = i;
    int multi = 1;
    int nb = 0;
    int x = i;

    for (j; str[j] > 47 && str[j] < 58; j++);
    j--;
    if (j == i - 1)
        return 0;
    if (j == i)
        return (str[i] - 48);
    for (x; x != j; x++)
        multi = multi * 10;
    x = j - 1;
    while (x != j) {
        nb = nb +((str[x] - 48) * multi);
        x++;
        multi = multi / 10;
    }
    nb = nb + str[x] - 48;
    return nb;
}

int my_s_printf_2(char *str, int i, int *t)
{
    switch (str[i + 1]) {
        case 'u':
            return 2;
            break;
        case 'o':
            return 5;
            break;
        case '%':
            return 1;
            break;
        case 'b':
            return 4;
            break;
    }
    return 0;
}

int  my_s_printf(char *str, int i, int *t)
{
    switch (str[i + 1]) {
        case 'd':
            return 2;
            break;
        case 'i':
            return 2;
            break;
        case 'c':
            return 7;
            break;
        case 's':
            return 3;
            break;
    }
    return my_s_printf_2(str, i, t);
}

void my_putchar_lenght(int zero)
{
    if (zero == 1)
        my_putchar2('0');
    else
        my_putchar2(' ');
}

int cell_blank(int lenght, int zero)
{
    if (lenght > 0) {
        for (int z = 0; z != lenght; z++) {
            my_putchar_lenght(zero);
        }
    }
}
