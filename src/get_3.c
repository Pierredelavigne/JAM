/*
** EPITECH PROJECT, 2021
** get_3.c
** File description:
** get 3
*/

#include "../include/def.h"

sfVector2f get_pos_sprite(void)
{
    sfVector2f pos;

    pos.x = -1 * (rand() % 960);
    pos.y = rand()%(500-400) + 400;
    return (pos);
}

sfVector2f get_pos_tower(int x, int y)
{
    sfVector2f pos;

    pos.x = x;
    pos.y = y;
    return (pos);
}