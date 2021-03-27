/*
** EPITECH PROJECT, 2021
** init_2.c
** File description:
** init my defender 2
*/

#include "../include/struct.h"

void init_button(int x, int y, but *but, int cas)
{
    sfVector2f pos = {x, y};
    but[cas].active = 0;
    sfSprite_setPosition(but[cas].button, pos);
}

void init_menu_first(but *but, global_t *global)
{
    but[0].button = init_sprite(0);
    but[1].button = init_sprite(2);
    but[2].button = init_sprite(3);

    init_button(40, 700, but, 0);
    init_button(670, 700, but, 1);
    init_button(1320, 700, but, 2);
}

void init_option(global_t *global)
{
    global->option = get_option();
    global->option_quit = 0;
    global->play = 1;
}

int event_option(sfEvent event, global_t *global)
{
    if (event.type == sfEvtMouseButtonPressed) {
        if (event.mouseButton.y >= 700 && event.mouseButton.y <= 1000
        && event.mouseButton.x >= 40 && event.mouseButton.x <= 1880)
            global->option_quit = 1;
    }
}

int event_menu_but(sfEvent event, global_t *global)
{
    if (event.mouseButton.y >= 700 && event.mouseButton.y <= 1000
        && event.mouseButton.x >= 40 && event.mouseButton.x <= 600)
        return (1);
    if (event.mouseButton.y >= 700 && event.mouseButton.y <= 1000
        && event.mouseButton.x >= 1320 && event.mouseButton.x <= 1880) {
        sfRenderWindow_close(global->window);
    }
    if (event.mouseButton.y >= 700 && event.mouseButton.y <= 1000
        && event.mouseButton.x >= 670 && event.mouseButton.x <= 1230) {
        option(global);
    }
    return (0);
}