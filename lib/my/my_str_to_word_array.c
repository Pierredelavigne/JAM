/*
** EPITECH PROJECT, 2020
** B_PSU_101_LIL_1_1_bsminishell1_margotte1_martins
** File description:
** Created by MARTINS Margotte,
*/

#include "my.h"
#include <stdlib.h>

int word_count(char const *str)
{
    int word = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n')
            word++;
    }
    word++;
    return (word);
}

int word_len(char const *str, int word)
{
    int size = 0;
    int spacing = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n')
            spacing += 1;
        if (spacing == word)
            size += 1;
        if (spacing > word) {
            return (size + 1);
        }
    }
    return (1);
}

char **my_str_to_word_array(char *str)
{
    int tot_word = (word_count(str) + 1);
    char **array = malloc(sizeof(char *) * (tot_word + 1));
    int tot_letter = 0;
    int i = 0;

    for (int x = 0; x < tot_word; x++) {
        array[x] = NULL;
        array[x] = malloc(sizeof(char) * word_len(str, x) + 1);
        for (int y = 0; y <= word_len(str, x); y++)
            array[x][y] = '\0';
    }
    for (; i < tot_word; i++) {
        for (int letter = 0; str[tot_letter] != '\n'
        && str[tot_letter] != '\0'; letter++)
            array[i][letter] = str[tot_letter++];
        if (str[tot_letter] != '\0')
            tot_letter++;
    }
    array[i] = NULL;
    return (array);
}
