#include <Eng/Eng.h>

#include <SDL2/SDL.h>
#include <GL/glew.h>

//Header
class TriangleRenderer : public Component
{
public:
  TriangleRenderer();

  void draw();

private:
  SDL_Window *window;
  GLuint programId;
  GLuint vaoId;

};