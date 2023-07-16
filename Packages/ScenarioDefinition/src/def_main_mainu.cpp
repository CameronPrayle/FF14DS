#include "def_main_menu.h"
#include "BackgroundDisplay.h"
#include "ButtonDisplay.h"

using namespace std;
using namespace CommonDisplay;

namespace ScenarioDefinitions
{
    def_main_menu::def_main_menu():def_parent(){}

    /**
     *  Sets up the variables for main menu scenario
     *  
    */
    ScenarioType def_main_menu::setupScenario()
    {
        ScenarioType scenario;

        // Set catagory 
        scenario.catagory = SCENARIO_CATAGORY_MAIN_MENU;

        // Set background
        string path = "../Assets/MainMenu/bg1.jpg";
        scenario.background = BackgroundDisplay::createBackground(path);

        // Set buttons
        // scenario.buttons = ButtonDisplay::createButtons();

        return scenario;
    }
}