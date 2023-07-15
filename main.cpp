#define SDL_MAIN_HANDLED
#define TFF_MAIN_HANDLED

#include "MainDisplay.h"

using namespace std;
using namespace CommonDisplay;

int main(int argc, char *argv[])
{
    /**  
    * Create main display object, this is where:
    *   Window/renderer gets created
    *   Events are handled
    *   SDL2 libraries get initialised
    *   Main game loop exists
    *   Exit procedure is handled
    */
    initialiseMainDisplay();
    runMainGameLoop();
    exit();
}