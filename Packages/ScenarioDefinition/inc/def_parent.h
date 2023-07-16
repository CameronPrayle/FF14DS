#pragma once

#include "DataTypes.h"

namespace ScenarioDefinitions
{
    class def_parent
    {
        public:
        def_parent();
        
        /**
         *  Sets up the variables for scenario
         *  
        */
        virtual ScenarioType setupScenario();
    };
}