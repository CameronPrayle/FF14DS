#include "ScenarioController.h"
#include "BackgroundDisplay.h"

using namespace CommonDisplay;

namespace ScenarioControl
{
    Scenario ScenarioController::currentScenario;

    /**
     *  Initialise Scenario Controller
     *  Sets up main menu scenario
     *  
    */
    void ScenarioController::initialiseScenario()
    {
        currentScenario.catagory = SCENARIO_CATAGORY_MAIN_MENU;
        currentScenario.background = BackgroundDisplay::createBackground(SCENARIO_CATAGORY_MAIN_MENU);
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