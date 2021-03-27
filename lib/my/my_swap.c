/*
** EPITECH PROJECT, 2020
** B_CPE_100_LIL_1_1_cpoolday04_margotte1_martins
** File description:
** Created by MARTINS Margotte,
*/

void my_swap(int *a, int *b)
{
    int c = 0;

    c = *b;
    *b = *a;
    *a = c;
}