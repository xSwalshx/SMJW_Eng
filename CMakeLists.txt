cmake_minimum_required(VERSION 2.6)

project(SMJW_ENG)

add_library(SMJW_Eng
  src/Eng/dummy.cpp
)

target_link_libraries(SMJW_Eng SDL2 opengl32 glew32)

add_executable(Game
  src/Game/main.cpp
)

target_link_libraries(Game SMJW_Eng)