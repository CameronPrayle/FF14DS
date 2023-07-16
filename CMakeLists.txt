cmake_minimum_required(VERSION 3.0.0)
project(FF14DS VERSION 0.1.0 LANGUAGES C CXX)

# Getting all files for exe
file(GLOB SOURCES
    *.cpp
    Packages/DataTypes/inc/*.h
    Packages/MainDisplay/inc/*.h
    Packages/MainDisplay/src/*.cpp
    Packages/ScenarioController/inc/*.h
    Packages/ScenarioController/src/*.cpp
    Packages/ScenarioDefinition/inc/*.h
    Packages/ScenarioDefinition/src/*.cpp
)

add_executable(FF14DS ${SOURCES})

# Setting all .h files for easy includes to project
target_include_directories(FF14DS PUBLIC
    "${PROJECT_SOURCE_DIR}"
    "${PROJECT_SOURCE_DIR}/SDL2/include/SDL2"
    "${PROJECT_SOURCE_DIR}/Packages/DataTypes"
    "${PROJECT_SOURCE_DIR}/Packages/MainDisplay/inc"
    "${PROJECT_SOURCE_DIR}/Packages/ScenarioController/inc"
    "${PROJECT_SOURCE_DIR}/Packages/ScenarioDefinition/inc"
)

# Finding SDL2 libraries
find_library(SDL2_LIBRARY SDL2 PATH ${PROJECT_SOURCE_DIR}/SDL2/lib)
find_library(SDL2_TTF_LIBRARY SDL2_ttf PATH ${PROJECT_SOURCE_DIR}/SDL2/lib)
find_library(SDL2_IMAGE_LIBRARY SDL2_image PATH ${PROJECT_SOURCE_DIR}/SDL2/lib)

# Add libraries to project
target_link_libraries(FF14DS m ${SDL2_LIBRARY} ${SDL2_TTF_LIBRARY} ${SDL2_IMAGE_LIBRARY})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)