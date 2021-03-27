/*
** EPITECH PROJECT, 2020
** my_defender
** File description:
** Created by MARTINS Margotte,
*/

#include "../include/my.h"
#include "../include/struct.h"
#include "../include/jam.h"
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>

void window_event(global_t global)
{
    if (global.event.type == sfEvtClosed)
        sfRenderWindow_close(global.window);
    if (global.event.type == sfEvtKeyPressed) {
        if (sfKeyboard_isKeyPressed(sfKeyEscape))
            sfRenderWindow_close(global.window);
    }
}

void draw_window(global_t global)
{
    sfRenderWindow_drawSprite(global.window, global.back, NULL);
    sfRenderWindow_drawSprite(global.window, global.play, NULL);
    sfRenderWindow_drawSprite(global.window, global.exit, NULL);
    sfRenderWindow_drawSprite(global.window, global.option, NULL);
}

void loop_window(global_t global)
{
    while (sfRenderWindow_isOpen(global.window)) {
        while (sfRenderWindow_pollEvent(global.window, &global.event))
            window_event(global);
        sfRenderWindow_clear(global.window, sfBlack);
        draw_window(global);
        sfRenderWindow_display(global.window);
    }
}

global_t init_sprite(global_t global)
{
    sfVector2f pos1 = {40, 700};
    sfVector2f pos2 = {670, 700};
    sfVector2f pos3 = {1320, 700};

    global.back = sfSprite_create();
    global.play = sfSprite_create();
    global.option = sfSprite_create();
    global.exit = sfSprite_create();
    global.back_texture = sfTexture_createFromFile("res/menu.jpg", NULL);
    global.option_texture = sfTexture_createFromFile("res/settings.png", NULL);
    global.exit_texture = sfTexture_createFromFile("res/exit.png", NULL);
    global.play_texture = sfTexture_createFromFile("res/play.png", NULL);
    sfSprite_setTexture(global.back, global.back_texture, sfTrue);
    sfSprite_setTexture(global.play, global.play_texture, sfTrue);
    sfSprite_setTexture(global.exit, global.exit_texture, sfTrue);
    sfSprite_setTexture(global.option, global.option_texture, sfTrue);
    sfSprite_setPosition(global.play, pos1);
    sfSprite_setPosition(global.option, pos2);
    sfSprite_setPosition(global.exit, pos3);
    return (global);
}

void window_destroy(global_t global)
{
    sfRenderWindow_destroy(global.window);
    // sfMusic_destroy(data.music_menu);
    sfMusic_destroy(global.music);
    // sfSound_destroy(data.sound_click);
    // sfSoundBuffer_destroy(data.buffer_click);
}

void open_window(void)
{
    sfVideoMode mode = {1920, 1080, 32};
    char const *name = "story";
    global_t global;

    global.window = sfRenderWindow_create(mode, name, sfDefaultStyle, NULL);
    initialisation_music(&global);
    global.sound_click = sfSound_create();
    global.buffer_click = sfSoundBuffer_createFromFile("./res/click.ogg");
    sfSound_setBuffer(global.sound_click, global.buffer_click);
    global = init_sprite(global);
    loop_window(global);
    window_destroy(global);
}