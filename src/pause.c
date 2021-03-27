/*
** EPITECH PROJECT, 2021
** pause.c
** File description:
** pause my defender
*/

#include "../include/def.h"

int event_butpress(sfEvent event, data *data, int i)
{
    if (event.mouseButton.y >= 200 && event.mouseButton.y <= 305
        && event.mouseButton.x >= 800 && event.mouseButton.x <= 1036)
        i = 1;
    if (event.mouseButton.y >= 400 && event.mouseButton.y <= 505
        && event.mouseButton.x >= 800 && event.mouseButton.x <= 1036) {
        i = 1;
        if (menu(data) == 1)
            return (2);
    }
    if (event.mouseButton.y >= 600 && event.mouseButton.y <= 705
        && event.mouseButton.x >= 800 && event.mouseButton.x <= 1036) {
        i = 1;
        sfRenderWindow_close(data->window);
    }
    return (i);
}

int event_pause(sfEvent event, int i, data *data, but *but)
{
    if (event.type == sfEvtMouseMoved) {
        event_menu_menu(&event, but);
    }
    if (event.type == sfEvtMouseButtonPressed) {
        i = event_butpress(event, data, i);
        if (i == 2)
            return (2);
    }
    if (event.type == sfEvtKeyPressed) {
        if (event.key.code == sfKeyEscape)
            i = 1;
    }
    return (i);
}

int pause(data *data, but *but)
{
    int i = 0;
    sfEvent event;

    sfMusic_pause(data->music);
    while (i == 0) {
        afficher_menu_pause(but, data);
        sfRenderWindow_display(data->window);
        while (sfRenderWindow_pollEvent(data->window, &event))
            i = event_pause(event, i, data, but);
        if (i != 0)
            sfSound_play(data->sound_click);
        if (i == 2)
            return (1);
    }
    sfMusic_play(data->music);
    return (0);
}