/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** main
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "menu.h"
 
int main(void)
{
    sfVideoMode mode = {800, 600, 60};
    sfRenderWindow *window;
    sfTexture *tex_menu;
    sfSprite *sprite_menu;
    sfEvent event;
    int screen = 0;

    window = sfRenderWindow_create(mode, "Workshop", sfResize | sfClose, NULL);
    tex_menu = sfTexture_createFromFile("sprite/menu.jpg", NULL);
    sprite_menu = sfSprite_create();
    sfSprite_setTexture(sprite_menu, tex_menu, sfTrue);

    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
            if (event.type == sfEvtMouseButtonPressed) {
                continue;
            }
        }
        sfRenderWindow_clear(window, sfBlack);
        sfRenderWindow_drawSprite(window, sprite_menu, NULL);
        sfRenderWindow_display(window);
    }
    sfSprite_destroy(sprite_menu);
    sfTexture_destroy(tex_menu);
    sfRenderWindow_destroy(window);
    return 0;
}