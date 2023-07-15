#pragma once

#include <string>

#include "SDL.h"
#include "SDL_ttf.h"
#include "SDL_image.h"

#include "DataTypes.h"

namespace CommonDisplay
{
    class MainDisplay
    {
        public:
        /**
         *  Window/renderer gets created
         *  SDL2 libraries get initialised
        */
        static void initialiseMainDisplay();

        /**
         *  Run the main game loop
         *  Calls to handle window events
        */
        static void runMainGameLoop();

        /**
         *  Events are handled
        */
        static void handleWindowEvent();
        
        /**
         *  Exit procedure is handled
         *  Destorys window and renderer
         *  Quits initialised SDL2 objects
        */
        static void exit();

        /**
         *  Sets window size store
         * 
        */
        static void handleWindowResize();

        static SDL_Window *window;
        static SDL_Renderer *renderer;
        static SDL_Event windowEvent;
        static WindowSizeType windowSize;
        static bool run;
    };
}