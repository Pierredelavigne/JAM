/*
** EPITECH PROJECT, 2020
** B_CPE_100_LIL_1_1_cpoolday05_margotte1_martins
** File description:
** Created by MARTINS Margotte,
*/

int my_compute_square_root(int nb)
{
    int nb2 = 0;

    if (nb < 0)
        return (0);
    while ((nb2 * nb2) != nb) {
        if ((nb2 * nb2) > nb)
            return (0);
        nb2 = nb2 + 1;
    }
    return (nb2);
}