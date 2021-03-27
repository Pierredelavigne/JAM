/*
** EPITECH PROJECT, 2020
** B_CPE_100_LIL_1_1_firtree_margotte1_martins
** File description:
** Created by MARTINS Margotte,
*/

#include "unistd.h"

int my_putchar(char c)
{
    write(1, &c, 1);
}