#pragma once

#include <string>

#include "DataTypes.h"

namespace CommonDisplay
{
    class BackgroundManager
    {
        public:
        /**
         *  Creates initial background
         * 
        */
        static void initialiseBackground();

        /**
         *  Returns image path given background catagory
         * 
         *  @param catagory
         *  @return string
        */
        static std::string getImagePathFromBackgroundCatagory(BackgroundCatagoryEnumType catagory);

        /**
         *  Draws currently stored background to renderer
         * 
        */
        static void drawBackground();

        static Background background; 
    };
}