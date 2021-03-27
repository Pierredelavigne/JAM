/*
** EPITECH PROJECT, 2021
** get_all.c
** File description:
** get all my defender
*/

#include "../include/def.h"

sfTexture *get_sprite_butoff(int cas, sfTexture *tower_text)
{
    switch (cas) {
        case 0:
            tower_text = sfTexture_createFromFile("\
resources/butplayoff.png", NULL);
            break;
        case 1:
            tower_text = sfTexture_createFromFile("\
resources/butmenuoff.png", NULL);
            break;
        case 2:
            tower_text = sfTexture_createFromFile("\
resources/butexitoff.png", NULL);
            break;
        case 3:
            tower_text = sfTexture_createFromFile("\
resources/butscoreoff.png", NULL);
            break;
    }
    return (tower_text);
}

sfSprite *get_button_off(int cas)
{
    sfTexture *tower_text;
    sfSprite *tower;

    tower_text = get_sprite_butoff(cas, tower_text);
    tower = sfSprite_create();
    sfSprite_setTexture(tower, tower_text, sfTrue);
    return (tower);
}

sfTexture *get_sprite_but(int cas, sfTexture *tower_text)
{
    switch (cas) {
        case 0:
            tower_text = sfTexture_createFromFile("\
resources/butplay.png", NULL);
            break;
        case 1:
            tower_text = sfTexture_createFromFile("\
resources/butmenu.png", NULL);
            break;
        case 2:
            tower_text = sfTexture_createFromFile("\
resources/butexit.png", NULL);
            break;
        case 3:
            tower_text = sfTexture_createFromFile("\
resources/butscore.png", NULL);
            break;
    }
    return (tower_text);
}

sfSprite *get_button(int cas)
{
    sfTexture *tower_text;
    sfSprite *tower;

    tower_text = get_sprite_but(cas, tower_text);
    tower = sfSprite_create();
    sfSprite_setTexture(tower, tower_text, sfTrue);
    return (tower);
}