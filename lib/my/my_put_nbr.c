/*
** EPITECH PROJECT, 2020
** CPOOL_2020_Day03
** File description:
** my_put_nbr
*/

#include "unistd.h"

int my_putchar(char c);

int my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        if (nb == -2147483648) {
            my_putchar('2');
            nb = -147483648;
        }
        nb *= -1;
    }
    while (nb >= 0) {
        if (nb >= 10)
            my_put_nbr(nb / 10);
        my_putchar((nb % 10) + 48);
        return (0);
    }
    return (0);
}