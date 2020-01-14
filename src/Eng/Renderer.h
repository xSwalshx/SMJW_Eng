#ifndef RENDERER_H
#define RENDERER_H

#include <GL/glew.h> 

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

#include "stb_image.h"
#include "Component.h"

#include <iostream>
#include <vector>

namespace Eng
{
  class Renderer : public Component
  {
  public:

    unsigned int VAO;

    void loadTexture(char const * path);

    void onInit();
    void onDisplay();

  private:
    unsigned int VBO;
    unsigned int texture;
  };

} //End of namespace

#endif