#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>

int main (int argc, char *argv[])
{
    if (SDL_Init(SDL_INIT_VIDEO)== -1)
    {
        fprintf (stderr, "Erreur d'initialisation de la SDL : %s\n", SDL_GetError());
        exit (EXIT_FAILURE);
    }

    SDL_Quit();

    return EXIT_SUCCESS;
}
