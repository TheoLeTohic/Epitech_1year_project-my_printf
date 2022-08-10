/*
** EPITECH PROJECT, 2021
** my_printf.c
** File description:
** my own printf
*/

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int without_moin(long long a, int *t);

int print_str(int nb2, int lenght, char *b);

int with_moin(long long a, int *t);

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

int without_moin(long long a, int *t)
{
    int y = 0;

    if (t[5] > int_to_lenght(a)) {
        for (y; y != t[5] - int_to_lenght(a); y++);
    }
    t[3] = t[3] - int_to_lenght(a) - y;
    if (t[8] != 0 && a >= 0) {
        t[3]--;
        cell_blank(t[3], t[2]);
        my_putchar2('+');
    } else {
        cell_blank(t[3], t[2]);
    }
    for (int tu = 0; tu != y; tu++) {
        my_putchar2('0');
    }
    int_to_str(a);
}

int print_str(int nb2, int lenght, char *b)
{
    int i = 0;

    if (nb2 < lenght_str(b)) {
        cell_blank(lenght - nb2, 0);
        for (i; i != nb2; i++)
            my_putchar2(b[i]);
    } else {
        cell_blank(lenght - lenght_str(b), 0);
        my_putstr2(b);
    }
}

int with_moin(long long a, int *t)
{
    int y = 0;

    if (t[5] > int_to_lenght(a)) {
        for (y; y != t[5] - int_to_lenght(a); y++);
    }
    t[3] = t[3] - int_to_lenght(a) - y;
    if (t[8] != 0) {
        if (a >= 0) {
            my_putchar2('+');
            t[3]--;
        }
    }
    for (int tu = 0; tu != y; t++) {
        my_putchar2('0');
    }
    int_to_str(a);
    cell_blank(t[3], t[2]);
}

int print_sizeone(char *str, int i, int lenght, int chara)
{
    cell_blank(lenght - 1, 0);
    my_putchar2(chara);
}

int width(char *str, int i, va_list ap, int *t)
{
    long long a;
    int n = 0;
    char *b;
    int y = 0;

    for (i; my_s_printf(str, i, t) == 0; i++);
    n = my_s_printf(str,i, t);
    if (n == 8) {
        if (t[7] == 0)
            without_moin(a, t);
        else
            with_moin(a, t);
    }
    if (n == 2) {
        a = va_arg(ap, int);
        if (t[7] == 0)
            without_moin(a, t);
        else
            with_moin(a,t);
    }
    if (n == 1)
        my_putchar2('%');
    if (n == 7)
        print_sizeone(str, i, t[3] , va_arg(ap, int));
    if (n == 4) {
        long long a = base_deux(va_arg(ap, int));
        if (t[7] == 0)
            without_moin(a, t);
        else
            with_moin(a, t);
    }
    if (n == 5) {
        long long a = base_huit(va_arg(ap, int));
        if (t[7] == 0)
            without_moin(a, t);
        else
            with_moin(a, t);
    }
    if (n == 3) {
        b = va_arg(ap, char *);
        my_putstr2(b);
    }
}
