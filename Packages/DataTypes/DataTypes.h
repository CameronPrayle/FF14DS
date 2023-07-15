#pragma once

#include "SDL.h"
#include "SDL_ttf.h"
#include "SDL_image.h"

/**
 *  Struct to hold window size as a float
 *  
*/
typedef struct
{
    int w;
    int h;
} WindowSize;

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
} Background;

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
    Background background;                // Background for a scenario
    ScenarioCatagoryEnumType catagory;    // Catagory of the Scenario
} Scenario;