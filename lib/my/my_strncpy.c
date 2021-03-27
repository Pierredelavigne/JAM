/*
** EPITECH PROJECT, 2020
** B_CPE_100_LIL_1_1_cpoolday06_margotte1_martins
** File description:
** Created by MARTINS Margotte,
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;
    int j = 0;

    for (; src[i] != '\0' && i != n; i++)
        dest[i] = src[i];
    if (n < dest[i])
        for (; dest[j] != '\0'; j++);
        dest[i] = '\0';
    return (dest);
}