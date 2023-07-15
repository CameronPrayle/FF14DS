#include "MainDisplay.h"
#include "BackgroundDisplay.h"

using namespace std;

namespace CommonDisplay
{
    /**
     *  Creates and returns background
     * 
     * @return Background
    */
    BackgroundType BackgroundDisplay::createBackground(ScenarioCatagoryEnumType catagory)
    {
        BackgroundType bg;
        bg.backgroundRect.x = 0;
        bg.backgroundRect.y = 0;
        bg.imagePath = getImagePathFromScenarioCatagory(catagory);
        bg.surface = IMG_Load(bg.imagePath.c_str());
        bg.texture = SDL_CreateTextureFromSurface(MainDisplay::renderer, bg.surface);
        return bg;
    }

    /**
     *  Returns image path given scenario catagory
     * 
     *  @param catagory
     *  @return string
    */
    string BackgroundDisplay::getImagePathFromScenarioCatagory(ScenarioCatagoryEnumType catagory)
    {
        switch (catagory)
        {
            case SCENARIO_CATAGORY_MAIN_MENU:
                return "../Assets/MainMenu/bg1.jpg";
            
            default:
                return "";
        }
    }

    /**
     *  Draws currently stored background to renderer
     * 
    */
    void BackgroundDisplay::drawBackground(BackgroundType &bg)
    {
        bg.backgroundRect.w = MainDisplay::windowSize.w;
        bg.backgroundRect.h = MainDisplay::windowSize.h;
        SDL_RenderCopy(MainDisplay::renderer, bg.texture, NULL, &bg.backgroundRect);
    }
}