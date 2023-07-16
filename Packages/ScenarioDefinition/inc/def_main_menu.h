#pragma once

#include <string>

#include "DataTypes.h"
#include "def_parent.h"

namespace ScenarioDefinitions
{
    class def_main_menu : public def_parent
    {
        public:
        def_main_menu();
        
        /**
         *  Sets up the variables for scenario
         *  
        */
        virtual ScenarioType setupScenario();
    };
}