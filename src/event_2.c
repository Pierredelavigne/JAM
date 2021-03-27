/*
** EPITECH PROJECT, 2021
** event_2.c
** File description:
** event 2 my defender
*/

#include "../include/def.h"

int event_utils_2(sfEvent *event, data *data)
{
    if (event->mouseMove.x <= 800 && event->mouseMove.x >= 600
        && event->mouseMove.y <= 1040 && event->mouseMove.y >= 840) {
        data->place = 3;
        return (1);
    } else {
        data->place = 0;
    }
    if (event->mouseMove.x <= 600 && event->mouseMove.x >= 400
        && event->mouseMove.y <= 1040 && event->mouseMove.y >= 840) {
        data->place = 4;
        return (0);
    } else {
        data->place = 0;
    }
    return (0);
}

int event_menu(sfEvent *event, data *data)
{
    if (event->mouseMove.x <= 1200 && event->mouseMove.x >= 1000
        && event->mouseMove.y <= 1040 && event->mouseMove.y >= 840) {
        data->place = 1;
        return (0);
    } else {
        data->place = 0;
    }
    if (event->mouseMove.x <= 1000 && event->mouseMove.x >= 800
        && event->mouseMove.y <= 1040 && event->mouseMove.y >= 840) {
        data->place = 2;
        return (0);
    } else {
        data->place = 0;
    }
    if (event_utils_2(event, data) == 1)
        return (0);
}

int event_main(data *data, sfEvent event, place *place)
{
    if (event.type == sfEvtMouseMoved) {
        event_menu(&event, data);
    }
    if (event.type == sfEvtMouseButtonPressed && data->tower >= 1) {
        check_place(event, place, data);
    }
    if (event.type == sfEvtMouseButtonPressed) {
        if (event.mouseButton.x <= 1200 && event.mouseButton.x >= 1000
            && event.mouseButton.y <= 1040 && event.mouseButton.y >= 840)
            data->tower = 1;
        if (event.mouseButton.x <= 1000 && event.mouseButton.x >= 800
            && event.mouseButton.y <= 1040 && event.mouseButton.y >= 840)
            data->tower = 2;
        if (event.mouseButton.x <= 800 && event.mouseButton.x >= 600
            && event.mouseButton.y <= 1040 && event.mouseButton.y >= 840)
            data->tower = 3;
        if (event.mouseButton.x <= 600 && event.mouseButton.x >= 400
            && event.mouseButton.y <= 1040 && event.mouseButton.y >= 840)
            data->tower = 4;
    }
}