#pragma once

#include <GL/glew.h>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

#include "Component.h"

namespace Eng
{
  /**
  * Represents the Shader Class
  * This is a derived class of Component
  * It handles the loading of external shader files for both vertex and fragment shaders
  */
  class Shader : public Component {

  public:
    // the program ID
    unsigned int ID;  ///< ID is an int for the shader objects can be attached to

    /**
    * \brief Initialize function
    * The shader is intialized using the resources loaded in throught the passed through file locations
    * 
    * @param[in] 'vertexShaderFilePath' The file location of the Vertex Shader File
    * @param[in] 'fragmentShaderFilePath' The file location of the Fragment Shader File
    *
    * If the file path is invalid an exception will not be thrown
    * If the file path is invalid the error will print to the console.
    */
    void onInit(const GLchar* vertexShaderFilePath, const GLchar* fragmentShaderFilePath);

    /**
    * \brief On Display sets the following
    * View Matrix
    * Model Matrix
    * Projection Matrix
    * This is used for the shader programs to draw the scene correctly
    */
    void onDisplay();
    

    /**
    * \brief Sets the bool of the passed through variable name with the value
    */
    void setBool(const std::string &name, bool value) const;

    /**
    * \brief Sets the Integar of the passed through variable name with the value
    */
    void setInt(const std::string &name, int value) const;

    /**
    * \brief Sets the Float of the passed through variable name with the value
    */
    void setFloat(const std::string &name, float value) const;

    /**
    * \brief Sets the Vector 2 of the passed through variable name with the value
    */
    void setVec2(const std::string &name, const glm::vec2 &value) const;

    /**
    * \brief Sets the Vector 2 of the passed through variable name with the values
    */
    void setVec2(const std::string &name, float x, float y) const;

    /**
    * \brief Sets the Vector 3 of the passed through variable name with the value
    */
    void setVec3(const std::string &name, const glm::vec3 &value) const;

    /**
    * \brief Sets the Vector 3 of the passed through variable name with the values
    */
    void setVec3(const std::string &name, float x, float y, float z) const;

    /**
    * \brief Sets the Vector 4 of the passed through variable name with the value
    */
    void setVec4(const std::string &name, const glm::vec4 &value) const;

    /**
    * \brief Sets the Vector 4 of the passed through variable name with the values
    */
    void setVec4(const std::string &name, float x, float y, float z, float w);

    /**
    * \brief Sets the 2x2 Matrix of the passed through variable name with the value
    */
    void setMat2(const std::string &name, const glm::mat2 &mat) const;

    /**
    * \brief Sets the 3x3 Matrix of the passed through variable name with the value
    */
    void setMat3(const std::string &name, const glm::mat3 &mat) const;

    /**
    * \brief Sets the 4x4x Matrix of the passed through variable name with the value
    */
    void setMat4(const std::string &name, const glm::mat4 &mat) const;
  };

} //End of namespace

/*

REFRRENCE

LearnOpenGL, 2016. CoordinateSystems [online]. Available from:
https://learnopengl.com/Getting-started/Coordinate-Systems [Accessed on:
13th January 2020].

*/