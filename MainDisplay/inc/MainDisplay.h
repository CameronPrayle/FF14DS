#pragma once

#include "SDL.h"
#include "SDL_ttf.h"
#include "SDL_image.h"

#include "DataTypes.h"

using namespace std;

namespace CommonDisplay
{
    /**
     *  Window/renderer gets created
     *  SDL2 libraries get initialised
    */
    void initialiseMainDisplay();

    /**
     *  Run the main game loop
     *  Calls to handle window events
    */
    void runMainGameLoop();

    /**
     *  Events are handled
    */
    void handleWindowEvent();
    
    /**
     *  Exit procedure is handled
     *  Destorys window and renderer
     *  Quits initialised SDL2 objects
    */
    void exit();

    /**
     *  Sets window size store, with float values
     * 
    */
    void setWindowSizeStore();

    static SDL_Window *window;
    static SDL_Renderer *renderer;
    static SDL_Event windowEvent;
    static WindowSize windowSize;
    static bool run;
}