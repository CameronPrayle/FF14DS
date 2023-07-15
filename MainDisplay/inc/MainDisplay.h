#pragma once

#include "SDL.h"
#include "SDL_ttf.h"
#include "SDL_image.h"

using namespace std;

namespace CommonDisplay
{
    // Window/renderer gets created, SDL2 libraries get initialised
    void initialiseMainDisplay();

    // Main game loop exists
    void runMainGameLoop();

    // Events are handled
    void handleWindowEvent();
    
    // Exit procedure is handled
    void exit();

    static SDL_Window *window;
    static SDL_Renderer *renderer;
    static SDL_Event windowEvent;
    static bool run;
}