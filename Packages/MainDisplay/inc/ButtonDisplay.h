#pragma once

#include <string>
#include <vector>

#include "DataTypes.h"

namespace CommonDisplay
{
    class ButtonDisplay
    {
        public:
        /**
         *  Initialise Scenario Controller
         *  Sets up main menu scenario
        */
        static std::vector<ButtonType> createButtons(ScenarioCatagoryEnumType catagory);
    };
}