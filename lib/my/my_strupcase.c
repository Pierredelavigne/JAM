/*
** EPITECH PROJECT, 2020
** B_CPE_100_LIL_1_1_cpoolday06_margotte1_martins
** File description:
** Created by MARTINS Margotte,
*/

char *my_strupcase(char *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++)
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = (str[i] - 32);
    return (str);
}