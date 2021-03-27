/*
** EPITECH PROJECT, 2020
** B_CPE_100_LIL_1_1_cpoolday05_margotte1_martins
** File description:
** Created by MARTINS Margotte,
*/

int my_is_prime(int nb)
{
    int count = 0;

    if (nb == 0 || nb == 1)
        return (0);
    for (int i = 1; i <= nb; i++) {
        if (nb % i == 0)
            count++;
    }
    if (count == 2)
        return (1);
    else
        return (0);
}