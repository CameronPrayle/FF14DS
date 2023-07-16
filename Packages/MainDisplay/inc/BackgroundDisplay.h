#pragma once

#include <string>

#include "DataTypes.h"

namespace CommonDisplay
{
    class BackgroundDisplay
    {
        public:
        /**
         *  Creates and returns background
         *  
         *  @param bgImagePath
         *  @return Background
        */
        static BackgroundType createBackground(std::string bgImagePath);

        /**
         *  Draws background to renderer
         * 
         * @param bg
        */
        static void drawBackground(BackgroundType &bg);
    };
}