<p> Bienvenue dans ce workshop qui va vous apprendre à faire des menus basique en CSFML. </p>
Un menu de jeu complet est composé de plusieurs éléments important:
un background, des boutons et une musique.
<p> Vous avez à votre disposition un début de code ainsi que les différents fonctions de la CSFML :</p>

----
Pour la musique:

    sfMusic *music;
    sfMusic_createFromFile(const char *filepath);
    sfMusic_play(sfMusic* music);
    sfMusic_setLoop(sfMusic* music, sfBool loop);
    sfMusic_destroy(music);

----
Pour le bouton:

    sfRectangleShape_create();
    sfRectangleShape_setFillColor(button->rect, sfBlue); # Pour changer la couleur du rectangle
    sfRectangleShape_setPosition(button->rect, button->pos);
    sfRectangleShape_setSize(button->rect, button->size);
    sfRenderWindow_drawRectangleShape(window, button->rect, NULL); # Pour afficher le rectangle dans la fenêtre
----
Pour récupérer la position de la souris:

    sfMouse_getPositionRenderWindow(const sfRenderWindow *window);

Si vous avez une question concernant une fonction ou autre n'hésitez pas !
