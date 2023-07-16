#pragma once

#include <string>
#include <map>

#include "DataTypes.h"
#include "def_parent.h"

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
        static void initialiseScenarioController();

        /**
         *  Decides what scenario definition extension to call and returns the scenario value
         *  
         * @param catagory
        */
        static ScenarioType setupScenario(ScenarioCatagoryEnumType catagory);

        /**
         *  Draws all assest that makeup current scenario
         *  
        */
        static void drawCurrentScenario();

        static ScenarioType currentScenario;

        // Maps scenario catagory to scenario defintion object
        static std::map<ScenarioCatagoryEnumType, ScenarioDefinitions::def_parent*> scenarioDefinitionMap;
    };
}