#pragma once

#include "SDL.h"
#include "SDL_ttf.h"
#include "SDL_image.h"

/**
 *  Enum to give background a catagory
 *  
*/
typedef enum
{
    BACKGROUND_CATAGORY_MAIN_MENU = 1
} BackgroundCatagoryEnumType;

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
    BackgroundCatagoryEnumType catagory;    // Catagory of the background
} Background;

/**
 *  Struct to hold window size as a float
 *  
*/
typedef struct
{
    int w;
    int h;
} WindowSize;

