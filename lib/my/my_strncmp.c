/*
** EPITECH PROJECT, 2020
** B_CPE_100_LIL_1_1_cpoolday06_margotte1_martins
** File description:
** Created by MARTINS Margotte,
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    for (int i = 0; i < n; i++)
        if (s1[i] - s2[i])
            return (s1[i] - s2[i]);
    return (0);
}