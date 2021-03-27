/*
** EPITECH PROJECT, 2020
** B_CPE_100_LIL_1_1_cpoolday06_margotte1_martins
** File description:
** Created by MARTINS Margotte,
*/

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;

    if (str[0] == '\0')
        return (0);
    while (to_find[i] != '\0') {
        if (to_find[i] != str[i])
            return (my_strstr(str + 1, to_find));
        i++;
        if (str[i] == '\0')
            return (0);
    }
    return (str);
}