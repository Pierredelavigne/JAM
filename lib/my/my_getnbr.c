/*
** EPITECH PROJECT, 2020
** B_CPE_100_LIL_1_1_cpoolday07_margotte1_martins
** File description:
** Created by MARTINS Margotte,
*/

int my_getnbr(char const *str)
{
    int n = 0;
    int i = 0;
    int neg = 1;

    for (;str[i] == '-' || str[i] == '+'; i++)
        if (str[i] == '-')
            neg = neg * (-1);
    for (; str[i] != '\0'; i++) {
        if ((str[i] < '0' || str[i] > '9'))
            return (n * neg);
        n = n * 10;
        n = n + str[i] - 48;
    }
    return (n * neg);
}
