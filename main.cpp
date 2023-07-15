#define SDL_MAIN_HANDLED
#define TFF_MAIN_HANDLED

#include "MainDisplay.h"

using namespace std;
using namespace CommonDisplay;

int main(int argc, char *argv[])
{
    // Initialise main display
    initialiseMainDisplay();

    // Run main game loop
    runMainGameLoop();

    // Runs clean up procedure, this will only be reached when main game loop is broken
    exit();
}