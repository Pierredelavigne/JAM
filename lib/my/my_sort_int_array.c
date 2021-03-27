/*
** EPITECH PROJECT, 2020
** B_CPE_100_LIL_1_1_cpoolday04_margotte1_martins
** File description:
** Created by MARTINS Margotte,
*/

void my_swap_two(int *array, int j, int save_value)
{
    if (array[j] > array[j + 1]) {
        save_value = array[j];
        array[j] = array[j + 1];
        array[j + 1] = save_value;
    }
}

void my_sort_int_array(int *array , int  size)
{
    int i = 0;
    int j = 0;
    int save_value;

    while (i < size) {
        while (j < size - 1) {
            my_swap_two(array, j, save_value);
            j++;
        }
        j = 0;
        i++;
    }
}