cmake_minimum_required(VERSION 2.6)

#"Project" - Tells CMake what to name the entire project
project(SMJW_ENG)

include_directories(src)

#"add_library" - Generates a library containing my engine "SMJW_Eng"
add_library(SMJW_Eng
  src/Eng/Eng.h
  src/Eng/Core.h
  src/Eng/Core.cpp
  src/Eng/Entity.h
  src/Eng/Entity.cpp
  src/Eng/Component.h
  src/Eng/Component.cpp
  src/Eng/Exception.h
  src/Eng/Exception.cpp
)

#"target_link_libraries" - States that "SMJW_Eng" requires "SDL2" etc
target_link_libraries(SMJW_Eng SDL2 opengl32 glew32)

#"add_executable" - Instructs CMake to create an output executable with the 
#given name and compiler from the specified source files
add_executable(Game
  src/Game/main.cpp
  src/Game/TriangleRenderer.h
  src/Game/TriangleRenderer.cpp
)

#"target_link_libraries" - Tells "Game" executable to link with my "SMJW_Eng" Library
target_link_libraries(Game SMJW_Eng)