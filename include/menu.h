/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** menu
*/

#include <SFML/Graphics.h>

#ifndef MENU_H_
    #define MENU_H_

typedef struct button {
    sfRectangleShape *rect;
    sfVector2f pos;
    sfVector2f size;
    void (*fct)(void); /*pointeur sur fonction */
} button_t;

#endif
