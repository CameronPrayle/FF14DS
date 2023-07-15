#pragma once

#include <string>

#include "DataTypes.h"

namespace CommonDisplay
{
    class BackgroundDisplay
    {
        public:
        /**
         *  Creates and stores background
         * 
        */
        static Background createBackground(ScenarioCatagoryEnumType catagory);

        /**
         *  Returns image path given scenario catagory
         * 
         *  @param catagory
         *  @return string
        */
        static std::string getImagePathFromScenarioCatagory(ScenarioCatagoryEnumType catagory);

        /**
         *  Draws background to renderer
         * 
         * @param bg
        */
        static void drawBackground(Background &bg);
    };
}