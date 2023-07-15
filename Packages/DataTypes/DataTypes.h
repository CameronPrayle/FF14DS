#pragma once

#include "SDL.h"
#include "SDL_ttf.h"
#include "SDL_image.h"

#include <string>
#include <vector>

using namespace std;

/**
 *  Struct to hold window size as a float
 *  
*/
typedef struct
{
    int w;
    int h;
} WindowSizeType;

/**
 *  Struct to setup main background for the game
 *  
*/
typedef struct
{
    SDL_Rect backgroundRect;                // Rect to hold texture for background
    SDL_Texture *texture;                   // Texture that will be applied to background rect
    SDL_Surface *surface;                   // Surface that holds the image that will be used to make the texture
    std::string imagePath;                  // Image path for the surface
} BackgroundType;

/**
 *  Enum to give a button a catagory
 *  
*/
typedef enum
{
    BUTTON_CATAGORY_START = 1,
    BUTTON_CATAGORY_OPTIONS = 2,
    BUTTON_CATAGORY_EXIT = 3
} ButtonCatagoryEnumType;

/**
 *  Struct for a button
 *  
*/
typedef struct
{
    SDL_Rect buttonRect;                    // Rect for button, can get position and width/height from this
    SDL_Texture *texture;                   // Texture that will be applied to the button
    SDL_Surface *surface;                   // Surface that holds the image that will be used to make the texture
    string imagePath;                       // Image path for the surface
    ButtonCatagoryEnumType catagory;        // Catagory of the button
} ButtonType;

/**
 *  Enum to give a scenario a catagory
 *  
*/
typedef enum
{
    SCENARIO_CATAGORY_MAIN_MENU = 1
} ScenarioCatagoryEnumType;

/**
 *  Struct to hold scenario data
 *  
*/
typedef struct
{
    BackgroundType background;                // Background for a scenario
    vector<ButtonType> buttons;               // List of buttons for a scenario
    ScenarioCatagoryEnumType catagory;        // Catagory of the Scenario
} ScenarioType;