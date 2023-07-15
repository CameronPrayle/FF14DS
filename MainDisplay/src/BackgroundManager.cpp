#include "BackgroundManager.h"

namespace CommonDisplay
{
    /**
     *  Creates initial background
     * 
    */
    void initialiseBackground()
    {
        background.catagory = BACKGROUND_CATAGORY_MAIN_MENU;
        background.imagePath = getImagePathFromBackgroundCatagory(background.catagory);
        background.surface = IMG_Load(background.imagePath);
        background.texture = SDL_CreateTextureFromSurface(renderer, background.surface);

        float defaultX = 0.0;
        float defaultY = 0.0;
        background.backgroundRect->x = defaultX;
        background.backgroundRect->y = defaultY;
        background.backgroundRect->w = windowSize.w;
        background.backgroundRect->h = windowSize.h;
    }

    /**
     *  Returns image path given background catagory
     * 
     *  @param catagory
     *  @return const char *
    */
    const char *getImagePathFromBackgroundCatagory(BackgroundCatagoryEnumType catagory)
    {
        const char *path;
        switch (catagory)
        {
            case BACKGROUND_CATAGORY_MAIN_MENU:
                return path = "../Assets/MainMenu/1.png";
            
            default:
                return path = "";
        }
    }

    /**
     *  Draws currently stored background to renderer
     * 
    */
    void drawBackground()
    {
        SDL_RenderCopyF(renderer, background.texture, NULL, background.backgroundRect);
    }
}