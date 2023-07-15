#include "MainDisplay.h"

namespace CommonDisplay
{
    // Window/renderer gets created, SDL2 libraries get initialised
    void initialiseMainDisplay()
    {
        // Create window, renderer, event director
        window = SDL_CreateWindow("FF14DS", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 1250, 850, SDL_WINDOW_RESIZABLE);
        renderer = SDL_CreateRenderer(window, -1, 0);

        // Initialise SDL2 Drawing and Fonts
        SDL_Init(SDL_INIT_EVERYTHING);
        TTF_Init();
        IMG_Init(IMG_INIT_PNG);
    }

    // Main game loop exists
    void runMainGameLoop()
    {
        run = true;

         // Main loop
        while(run)
        {
            handleWindowEvent();

            // Apply any renderings to the screen
            SDL_RenderPresent(renderer);
        }
    }

    // Events are handled
    void handleWindowEvent()
    {
        // If there is an event
        if(SDL_PollEvent(&windowEvent))
        {
            // EXIT
            if(windowEvent.type == SDL_QUIT)
            {
                run = false;
            }

            // LEFT CLICK
            else if(windowEvent.type == SDL_MOUSEBUTTONDOWN)
            {
                if(windowEvent.button.button == SDL_BUTTON_LEFT)
                {
                    
                }
            }
        }
    }

    void exit()
    {
        // Clean up
        SDL_DestroyWindow(window);
        SDL_DestroyRenderer(renderer);
        TTF_Quit();
        IMG_Quit();
        SDL_Quit();
    }
}