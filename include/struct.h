/*
** EPITECH PROJECT, 2020
** G_JAM_001_LIL_0_2_jam_margotte1_martins
** File description:
** Created by MARTINS Margotte,
*/

#include <stdlib.h>
#include <stdio.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <time.h>

#ifndef STRUCT_H_
#define STRUCT_H_

typedef struct global
{
    sfEvent event;
    sfRenderWindow *window;
    sfMusic *music;
    sfMusic *music_menu;
    sfSprite *back;
    sfTexture *back_texture;
    sfSprite *logo;
    sfSprite *option;
    sfTexture *option_texture;
    sfSprite *exit;
    sfTexture *exit_texture;
    sfSprite *play;
    sfTexture *play_texture;
    sfSoundBuffer *buffer_click;
    sfSound *sound_click;
    int option_quit;
} global_t;

typedef struct button {
    sfSprite *button;
    sfVector2f pos;
    sfRectangleShape *rect;
    sfVector2f size;
    int active;
} but;


#endif /* STRUCT_H_ */
