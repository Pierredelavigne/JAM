/*
** EPITECH PROJECT, 2020
** G_JAM_001_LIL_0_2_jam_margotte1_martins
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

void initialisation_music(global_t *global)
{
    global->music = sfMusic_createFromFile("./res/music.ogg");
    sfMusic_play(global->music);
    sfMusic_setLoop(global->music, sfTrue);
}

