/*
** EPITECH PROJECT, 2021
** my_str_to_word_array.c 
** File description:
** task04
*/

#include <stdlib.h>
#include <stdio.h>
#include "../../include/my.h"

void my_putchar(char c);

int my_putstr(char const *str);

int alpha(char const *str, int i)
{
    if (str[i] < 48) {
        return (0);
    }
    if (str[i] > 57 && str[i] < 65) {
        return (0);
    }
    if (str[i] > 90 && str[i] < 97) {
        return (0);
    }
    if (str[i] > 122) {
        return (0);
    }
    return (1);
}

char **my_str_2(char const *str, char **new_str, int temp_world, int pos_tab)
{
    new_str[pos_tab] = malloc(sizeof(char) * (temp_world + 3));
    temp_world = 0;
    pos_tab = 0;
    for (int x = 0; str[x] != '\0'; x++) {
        if (alpha(str,x) == 0) {
            new_str[pos_tab][temp_world] = '\0';
            pos_tab++;
            temp_world = 0;
        } else {
            new_str[pos_tab][temp_world] = str[x];
            temp_world++;
        }
    }
    new_str[pos_tab][temp_world] = '\0';
    pos_tab++;
    new_str[pos_tab] = NULL;
    return (new_str);
}

char **my_str_to_word_array (char const *str)
{
    char **new_str;
    int nb_world = 1;
    int pos_tab = 0;
    int temp_world = 0;

    for (int i = 0; str[i] != '\0';i++) {
        if (alpha(str,i) == 0) {
            nb_world += 1;
        }
    }
    new_str = malloc(sizeof(char *) * (nb_world + 1));
    for (int j = 0; str[j] != '\0';j++) {
        if (alpha(str,j) == 0) {
            new_str[pos_tab] = malloc(sizeof(char) * (temp_world + 3));
            pos_tab++;
            temp_world = 0;
        }
        temp_world++;
    }
    return (my_str_2(str,new_str,temp_world,pos_tab));
}
