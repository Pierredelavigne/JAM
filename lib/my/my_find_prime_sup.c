/*
** EPITECH PROJECT, 2020
** B_CPE_100_LIL_1_1_cpoolday05_margotte1_martins
** File description:
** Created by MARTINS Margotte,
*/

int my_find_prime_sup(int nb)
{
    int i;

    if (nb < 0 || nb == 1) {
        i = my_find_prime_sup(nb + 1);
        return (i);
    }
    if (nb == 2)
        return (2);
    if (nb % 2 == 0) {
        i = my_find_prime_sup(nb + 1);
        return (i);
    }
    for (int j = 3; j * j <= nb; j = j + 2) {
        if (nb % j == 0) {
            i = my_find_prime_sup(nb + 1);
            return (i);
        }
    }
    return (nb);
}