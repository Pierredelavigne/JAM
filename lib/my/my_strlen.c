/*
** EPITECH PROJECT, 2020
** B_CPE_100_LIL_1_1_cpoolday04_margotte1_martins
** File description:
** Created by MARTINS Margotte,
*/

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}