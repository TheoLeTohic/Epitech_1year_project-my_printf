/*
** EPITECH PROJECT, 2021
** my_put_str.c
** File description:
** task02
*/

#include "../../include/my.h"

void my_putchar(char c);

int my_putstr(char const *str)
{
    while (*str != '\0') {
        my_putchar(*str++);
    }
    return (0);
}
