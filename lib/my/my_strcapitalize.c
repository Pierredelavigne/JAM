/*
** EPITECH PROJECT, 2020
** B_CPE_100_LIL_1_1_cpoolday06_margotte1_martins
** File description:
** Created by MARTINS Margotte,
*/

char *my_strlowcase(char *str);

char *my_strcapitalize(char *str)
{
    my_strlowcase(str);
    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] = str[0] - 32;
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i - 1] >= ' ' && str[i - 1] <= '/' || str[i - 1] == ';')
            if (str[i] >= 'a' && str[i] <= 'z')
                str[i] = str[i] - 32;
    return (str);
}