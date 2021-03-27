/*
** EPITECH PROJECT, 2020
** CPOOL_2020_Day03
** File description:
** my_isneg
*/

#include "unistd.h"

int my_putchar(char c);

int my_isneg(int n)
{
    if (n < 0)
        my_putchar('N');
    else if (n >= 0)
        my_putchar('P');
    return (0);
}