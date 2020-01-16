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

  /**
  * Represents the Renderer Class 
  * This is a derived class of Component
  * It handles the openGL for rendering textures and drawing a cube
  */
  class Renderer : public Component
  {
  public:

    unsigned int VAO;                     ///< Unasigned Vertex Array Object 'VAO'

    /**
    * \brief Initalizes the Renderer
    * Sets the coordinates for the cube positions and the texture coordinates
    * Generates the VAO and VBO
    * Binds the VAO and VBO
    */
    void onInit();

    /*
    * \brief Displays the cube with the loaded in texture
    */
    void onDisplay();

    /**
    * \brief Loads the Texture
    * Resource Loadind, Using the file path for the texture
    * Will throw an exception if the file path is invalid
    */
    void loadTexture(char const * path);

  private:
    unsigned int VBO;                     ///< Unasigned Vertex Buffer Object 'VBO'
    unsigned int texture;                 ///< Unasigned int fot the texture
  };

} //End of namespace

#endif