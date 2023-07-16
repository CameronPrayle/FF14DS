#include "MainDisplay.h"
#include "BackgroundDisplay.h"

using namespace std;

namespace CommonDisplay
{
    /**
     *  Creates and returns background
     *  
     *  @param bgImagePath
     *  @return Background
    */
    BackgroundType BackgroundDisplay::createBackground(string bgImagePath)
    {
        BackgroundType bg;
        bg.backgroundRect.x = 0;
        bg.backgroundRect.y = 0;
        bg.imagePath = bgImagePath;
        bg.surface = IMG_Load(bg.imagePath.c_str());
        bg.texture = SDL_CreateTextureFromSurface(MainDisplay::renderer, bg.surface);
        return bg;
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