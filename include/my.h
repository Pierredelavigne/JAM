/*
** EPITECH PROJECT, 2020
** B_CPE_100_LIL_1_1_cpoolday09_margotte1_martins
** File description:
** Created by MARTINS Margotte,
*/
#ifndef MY_H_
#define MY_H_

int my_compute_power_rec(int nb, int p);

int my_compute_square_root(int nb);

int my_find_prime_sup(int nb);

int my_getnbr(char const *str);

int my_is_prime(int nb);

int my_isneg(int n);

int my_put_nbr(int nb);

int my_putchar(char c);

int my_putstr(char const *str);

char *my_revstr(char *str);

int my_showmem(char const *str, int size);

int my_showstr(char const *str);

void my_swap_two(int *array, int j, int save_value);

void my_sort_int_array(int *array , int  size);

int my_str_isalpha(char const *str);

int my_str_islower(char const *str);

int my_str_isnum(char const *str);

int my_str_isprintable(char const *str);

int my_str_isupper(char const *str);

char *my_strcapitalize(char *str);

char *my_strcat(char *dest, char const *src);

int my_strcmp(char const *s1, char const *s2);

char *my_strcpy(char *dest, char const *src);

int my_strlen(char const *str);

char *my_strlowcase(char *str);

int my_strlen_ncat(char const *str);

char *my_strncat(char *dest, char const *src, int nb);

int my_strncmp(char const *s1, char const *s2, int n);

int my_strncmp_to_end(char const *s1, char const *s2, int n);

char *my_strncpy(char *dest, char const *src, int n);

char *my_strstr(char *str, char const *to_find);

char *my_strupcase(char *str);

void my_swap(int *a, int *b);

int word_count(char const *str);

int word_len(char const *str, int word);

char **my_str_to_word_array(char *str);

#endif /* MY_H_ */
