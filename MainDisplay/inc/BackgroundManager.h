#pragma once

#include "MainDisplay.h"

namespace CommonDisplay
{
    /**
     *  Creates initial background
     * 
    */
    void initialiseBackground();

    /**
     *  Returns image path given background catagory
     * 
     *  @param catagory
     *  @return const char *
    */
    const char *getImagePathFromBackgroundCatagory(BackgroundCatagoryEnumType catagory);

    /**
     *  Draws currently stored background to renderer
     * 
    */
    void drawBackground();

    static Background background;
}