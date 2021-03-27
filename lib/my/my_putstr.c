/*
** EPITECH PROJECT, 2020
** B_CPE_100_LIL_1_1_cpoolday04_margotte1_martins
** File description:
** Created by MARTINS Margotte,
*/

#include "unistd.h"

int my_putchar(char c);

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
    return (0);
}