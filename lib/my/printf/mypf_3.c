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

void my_putstr2(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar2(str[i]);
}

int base_deux(int nbr)
{
    int res = 0;
    int i = 1;

    for (i; nbr / 2 != 0;) {
        res = res + ((nbr % 2) * i);
        nbr = (nbr / 2);
        i = i * 10;
    }
    res = res + (nbr * i);
    return res;
}

char *base_seize(int nbr)
{
    char *res = malloc(sizeof(char) * 20);
    char base[17] = "0123456789ABCDEF";
    int i = 1;
    int j = 0;

    for (i; nbr / 16 != 0;j++) {
        res[j] = base[nbr % 16];
        nbr = (nbr / 16);
        i = i * 10;
    }
    res[j] = base[nbr];
    return res;
}

int base_huit(int nbr)
{
    int res = 0;
    int i = 1;

    for (i; nbr / 8 != 0;) {
        res = res + ((nbr % 8) * i);
        nbr = (nbr / 8);
        i = i * 10;
    }
    res = res + (nbr * i);
    return res;
}

int hastag(char c)
{
    switch (c) {
        case 'x':
            my_putstr2("Ox");
            return 1;
            break;
        case 'X':
            my_putstr2("0X");
            return 1;
            break;
        case 'o':
            my_putchar2('0');
            return 1;
            break;
    }
    return 0;
}
