/*
** EPITECH PROJECT, 2021
** my_putchar.c
** File description:
** write_characters
*/

#include <unistd.h>
#include "../../include/my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
