/*
** EPITECH PROJECT, 2020
** B_CPE_100_LIL_1_1_cpoolday06_margotte1_martins
** File description:
** Created by MARTINS Margotte,
*/

char *my_revstr(char *str)
{
    int i = 0;
    int j = 0;
    int s;

    while (str[i] != '\0')
        i++;
    i--;
    for (; i >= j; i--, j++) {
        s = str[i];
        str[i] = str[j];
        str[j] = s;
    }
    return (str);
}