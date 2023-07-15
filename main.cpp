#define SDL_MAIN_HANDLED
#define TFF_MAIN_HANDLED

#include "MainDisplay.h"
#include "ScenarioController.h"

#include <iostream>

using namespace std;
using namespace CommonDisplay;
using namespace ScenarioControl;

int main(int argc, char *argv[])
{
    // Initialise main display
    MainDisplay::initialiseMainDisplay();

    // Initialise scenario controller
    ScenarioController::initialiseScenarioController();

    // Run main game loop
    MainDisplay::runMainGameLoop();

    // Runs clean up procedure, this will only be reached when main game loop is broken
    MainDisplay::exit();
}