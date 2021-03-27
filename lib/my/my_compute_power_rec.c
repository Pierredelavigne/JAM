/*
** EPITECH PROJECT, 2020
** B_CPE_100_LIL_1_1_cpoolday05_margotte1_martins
** File description:
** Created by MARTINS Margotte,
*/

int my_compute_power_rec(int nb, int p)
{
    if (p == 0)
        return (1);
    if (p < 0)
        return (0);
    nb = my_compute_power_rec(nb, p - 1) * nb;
    return (nb);
}