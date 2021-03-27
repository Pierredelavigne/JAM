/*
** EPITECH PROJECT, 2020
** G_JAM_001_LIL_0_2_jam_margotte1_martins
** File description:
** Created by MARTINS Margotte,
*/

#include "struct.h"

#ifndef JAM_H_
#define JAM_H_

//music.c
void initialisation_music(global_t *global);

//window.c
void window_event(global_t global);
void loop_window(global_t global);
void open_window(void);

//main.c
int main(int argc, char **argv);


// void afficher_menu_pause(but *but, data *data);

//pause

// int pause(data *data, but *but);

#endif /* JAM_H_ */