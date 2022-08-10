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

void my_flags(va_list ap, char *str, int i, int *t);

int fill_point(char *str, int i, int, int *t);

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

int other(char *str, int i, int *t);

void my_putstr2(char *str);

int base_deux(int nbr);

char *base_seize(int nbr);

int base_huit(int nbr);

void my_flag_input(char *str, int i, int *t, va_list ap)
{
    int r = i;

    if (t[2] == 1)
        r++;
    if (t[1] == 0) {
        t[2] = fill_point(str, i, t[2], t);
        t[6] = nnumber(str, r + 1);
        t[5] = find_second(str, i + 1, t);
        if (t[6] != 0)
            t[3] = t[3] + t[6];
        width(str, i, ap, t);
        t[0] = 1;
    }

}

void my_flags(va_list ap, char *str, int i, int *t)
{
    switch (str[i + 1]) {
        case ' ':
            if (t[3] == 0)
                my_putchar2(' ');
            t[3] = -1;
            break;
        case '#':
            t[4] = 1;
            break;
        case '0':
            t[2] = 1;
            break;
        case '-':
            t[7] = 1;
            break;
        case '+':
            t[8] = 1;
            break;
    }
    my_flag_input(str, i, t, ap);
    t[0] = 1;
}

int fill_point(char *str, int i, int zero, int *t)
{
    int point = 0;

    for (i; my_s_printf(str, i, t) == 0; i++) {
        if (str[i + 1] == '.')
            point = 1;
    }
    if (point == 1)
        return 0;
    return zero;
}

int  m(va_list ap, char *str, int i)
{
    int *tab_var = malloc(sizeof(int) * 9);

    for (int i = 0; i != 9; i++) {
        tab_var[i] = 0;
    }
    while (tab_var[0] != 1) {
        if (other(str, i, tab_var) == 1)
            exit(84);
        my_flags(ap, str, i, tab_var);
        i++;
    }
    return i;
}

int my_printf(char *str, ...)
{
    va_list ap;
    int i = 0;
    int *t = malloc(sizeof(int) * 10);

    va_start(ap, str);
    for (i; str[i] != '\0'; i++) {
        if (str[i] == '%') {
            m(ap, str, i);
            for (i; my_s_printf(str, i, t) == 0; i++);
            i++;
        } else
            my_putchar2(str[i]);
    }
    va_end(ap);
    return 0;
}
