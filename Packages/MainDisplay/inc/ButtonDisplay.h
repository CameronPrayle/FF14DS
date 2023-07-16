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
         *  Creates buttons for a scenario
         *  
        */
        static std::vector<ButtonType> createButtons();
    };
}