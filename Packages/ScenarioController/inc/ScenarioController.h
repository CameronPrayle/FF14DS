#pragma once

#include <string>

#include "DataTypes.h"

namespace ScenarioControl
{
    class ScenarioController
    {
        public:
        /**
         *  Initialise Scenario Controller
         *  Sets up main menu scenario
         *  
        */
        static void initialiseScenario();

        /**
         *  Draws all assest that makeup current scenario
         *  
        */
        static void drawCurrentScenario();

        static Scenario currentScenario;
    };
}