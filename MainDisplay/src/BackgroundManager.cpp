#include "MainDisplay.h"
#include "BackgroundManager.h"

using namespace std;

namespace CommonDisplay
{
    Background BackgroundManager::background; 

    /**
     *  Creates initial background
     * 
    */
    void BackgroundManager::initialiseBackground()
    {
        background.catagory = BACKGROUND_CATAGORY_MAIN_MENU;
        background.backgroundRect.x = 0;
        background.backgroundRect.y = 0;
        background.imagePath = getImagePathFromBackgroundCatagory(background.catagory);
        background.surface = IMG_Load(background.imagePath.c_str());
        background.texture = SDL_CreateTextureFromSurface(MainDisplay::renderer, background.surface);
    }

    /**
     *  Returns image path given background catagory
     * 
     *  @param catagory
     *  @return string
    */
    string BackgroundManager::getImagePathFromBackgroundCatagory(BackgroundCatagoryEnumType catagory)
    {
        switch (catagory)
        {
            case BACKGROUND_CATAGORY_MAIN_MENU:
                return "../Assets/MainMenu/bg1.jpg";
            
            default:
                return "";
        }
    }

    /**
     *  Draws currently stored background to renderer
     * 
    */
    void BackgroundManager::drawBackground()
    {
        background.backgroundRect.w = MainDisplay::windowSize.w;
        background.backgroundRect.h = MainDisplay::windowSize.h;
        SDL_RenderCopy(MainDisplay::renderer, background.texture, NULL, &background.backgroundRect);
    }
}