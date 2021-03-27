/*
** EPITECH PROJECT, 2020
** B_CPE_100_LIL_1_1_cpoolday06_margotte1_martins
** File description:
** Created by MARTINS Margotte,
*/

int my_str_isnum(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= '1' && str[i] <= '9')
            i++;
        else
            return (0);
    }
    return (1);
}