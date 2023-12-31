#include "MainDisplay.h"
#include "BackgroundDisplay.h"
#include "ScenarioController.h"

#include <iostream>

using namespace std;
using namespace ScenarioControl;

namespace CommonDisplay
{
    SDL_Window *MainDisplay::window;
    SDL_Renderer *MainDisplay::renderer;
    SDL_Event MainDisplay::windowEvent;
    WindowSizeType MainDisplay::windowSize;
    bool MainDisplay::run;

    /**
     *  Window/renderer gets created
     *  SDL2 libraries get initialised
    */
    void MainDisplay::initialiseMainDisplay()
    {        
        // Initialise SDL2 Drawing and Fonts
        SDL_Init(SDL_INIT_EVENTS);
        TTF_Init();
        IMG_Init(IMG_INIT_PNG);
        IMG_Init(IMG_INIT_JPG);

        // Create window, renderer, event director
        windowSize = {1600, 850};
        window = SDL_CreateWindow("FF14DS", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, windowSize.w, windowSize.h, SDL_WINDOW_RESIZABLE);
        renderer = SDL_CreateRenderer(window, -1, 0);
    }

    /**
     *  Run the main game loop
     *  Calls to handle window events
    */
    void MainDisplay::runMainGameLoop()
    {
        run = true;

         // Main loop
        while(run)
        {
            // Clear renderer
            SDL_RenderClear(renderer);

            // Handle window resize
            handleWindowResize();

            // Draw current scenario
            ScenarioController::drawCurrentScenario();

            // Handle window event
            handleWindowEvent();

            // Apply any renderings to the screen
            SDL_RenderPresent(renderer);
        }
    }

    /**
     *  Events are handled
    */
    void MainDisplay::handleWindowEvent()
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

    /**
     *  Exit procedure is handled
     *  Destorys window and renderer
     *  Quits initialised SDL2 objects
    */
    void MainDisplay::exit()
    {
        // Clean up
        SDL_DestroyWindow(window);
        SDL_DestroyRenderer(renderer);
        TTF_Quit();
        IMG_Quit();
        SDL_Quit();
    }

    /**
     *  Sets window size store
     * 
    */
    void MainDisplay::handleWindowResize()
    {
        int w = 0; 
        int h = 0;
        SDL_GetWindowSize(window, &w, &h);
        windowSize = {w, h};
    }
}