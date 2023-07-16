#include "ScenarioController.h"
#include "BackgroundDisplay.h"
#include "ButtonDisplay.h"

#include "def_main_menu.h"

using namespace CommonDisplay;
using namespace ScenarioDefinitions;

namespace ScenarioControl
{
    ScenarioType ScenarioController::currentScenario;
    std::map<ScenarioCatagoryEnumType, def_parent*> ScenarioController::scenarioDefinitionMap;

    /**
     *  Initialise Scenario Controller
     *  Sets up main menu scenario
     *  
    */
    void ScenarioController::initialiseScenarioController()
    {
        scenarioDefinitionMap.clear();
        
        scenarioDefinitionMap[SCENARIO_CATAGORY_MAIN_MENU] = new def_main_menu();

        currentScenario = setupScenario(SCENARIO_CATAGORY_MAIN_MENU);
    }

    
    /**
     *  Decides what scenario definition extension to call and returns the scenario value
     *  
     * @param catagory
    */
    ScenarioType ScenarioController::setupScenario(ScenarioCatagoryEnumType catagory)
    {
        return scenarioDefinitionMap[catagory]->setupScenario();
    }

    /**
     *  Draws all assest that makeup current scenario
     *  
    */
    void ScenarioController::drawCurrentScenario()
    {
        BackgroundDisplay::drawBackground(currentScenario.background);
    }
}