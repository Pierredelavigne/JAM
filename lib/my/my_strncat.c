/*
** EPITECH PROJECT, 2020
** B_CPE_100_LIL_1_1_cpoolday07_margotte1_martins
** File description:
** Created by MARTINS Margotte,
*/

int my_strlen_ncat(char const *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int dest_len = my_strlen_ncat(dest);

    for (; i < nb && src[i] != '\0' ; i++) {
        dest[dest_len + i] = src[i];
    }
    dest[dest_len + i] = '\0';

    return (dest);
}