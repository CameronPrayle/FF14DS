#include "ScenarioController.h"
#include "BackgroundDisplay.h"
#include "ButtonDisplay.h"

using namespace CommonDisplay;

namespace ScenarioControl
{
    ScenarioType ScenarioController::currentScenario;

    /**
     *  Initialise Scenario Controller
     *  Sets up main menu scenario
     *  
    */
    void ScenarioController::initialiseScenarioController()
    {
        currentScenario.catagory = SCENARIO_CATAGORY_MAIN_MENU;
        currentScenario.background = BackgroundDisplay::createBackground(SCENARIO_CATAGORY_MAIN_MENU);
        currentScenario.buttons = ButtonDisplay::createButtons(SCENARIO_CATAGORY_MAIN_MENU);
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