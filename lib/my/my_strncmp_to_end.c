/*
** EPITECH PROJECT, 2020
** B_CPE_110_LIL_1_1_antman_margotte1_martins
** File description:
** Created by MARTINS Margotte,
*/

#include "my.h"

int my_strncmp_to_end(char const *s1, char const *s2, int n)
{
    int j = 0;

    for (int i = n; s1[i] != '\0' && s2[j] != '\0'; i++) {
        if ((s1[i] - s2[j]))
            return (s1[i] - s2[j]);
        j++;
    }
    return (0);
}
