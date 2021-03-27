/*
** EPITECH PROJECT, 2021
** get_2.c
** File description:
** get 2
*/

#include "../include/def.h"

sfSprite *get_background_menu(void)
{
    sfIntRect positionback;
    sfTexture *back_text;
    sfSprite *back;

    positionback.top = 0;
    positionback.left = 0;
    positionback.width = 1920;
    positionback.height = 1080;
    back_text = sfTexture_createFromFile("\
res/back_menu.jpg", &positionback);
    back = sfSprite_create();
    sfSprite_setTexture(back, back_text, sfTrue);
    return (back);
}

sfSprite *get_background(void)
{
    sfIntRect positionback;
    sfTexture *back_text;
    sfSprite *back;

    positionback.top = 0;
    positionback.left = 0;
    positionback.width = 1920;
    positionback.height = 1080;
    back_text = sfTexture_createFromFile("\
resources/back.png", &positionback);
    back = sfSprite_create();
    sfSprite_setTexture(back, back_text, sfTrue);
    return (back);
}

void get_sprite_menu(inv *inv, int cas)
{
    switch(cas) {
        case 0:
            inv[cas].tower = get_tower();
            break;
        case 1:
            inv[cas].tower = get_tower_2();
            break;
        case 2:
            inv[cas].tower = get_tower_3();
            break;
        case 3:
            inv[cas].tower = get_tower_4();
            break;
    }
}

void get_sprite(place *place, int i, int cas)
{
    switch(cas) {
        case 1:
            place[i].sprite = get_tower();
            break;
        case 2:
            place[i].sprite = get_tower_2();
            break;
        case 3:
            place[i].sprite = get_tower_3();
            break;
        case 4:
            place[i].sprite = get_tower_4();
            break;
    }
}