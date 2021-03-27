/*
** EPITECH PROJECT, 2021
** get_5.c
** File description:
** get 5
*/

#include "../include/def.h"

sfSprite *get_logo(void)
{
    sfTexture *tower_text;
    sfSprite *tower;
    sfVector2f pos = {710, 40};

    tower_text = sfTexture_createFromFile("\
resources/logo.png", NULL);
    tower = sfSprite_create();
    sfSprite_setTexture(tower, tower_text, sfTrue);
    sfSprite_setPosition(tower, pos);
    return (tower);
}