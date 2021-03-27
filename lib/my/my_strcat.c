/*
** EPITECH PROJECT, 2020
** B_CPE_100_LIL_1_1_cpoolday07_margotte1_martins
** File description:
** Created by MARTINS Margotte,
*/

char *my_strcat(char *dest, char const *src)
{
    int i = 0;

    for (; dest[i] != '\0'; i++);
    for (int j = 0; src[j] != '\0'; i++, j++)
        dest[i] = src[j];
    dest[i] = '\0';
    return (dest);
}