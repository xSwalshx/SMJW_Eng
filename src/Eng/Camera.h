#pragma once

#ifndef _CAMERA_
#define _CAMERA_

#include "Component.h"

#include <glm\glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

namespace Eng
{
  /**
  * Represents the Camera Component
  * The camera is used to render the view from the Camera's perspective
  */
  class Camera : public Component
  {
  private:
    //Variables
    glm::mat4 m_ViewMatrix;         ///View Matrix
    glm::mat4 m_ProjectionMatrix;   ///Projection Matrix

  public:
    //Setters
    /**
    * \brief Sets the Camera's View Matrix to the passed through variable
    */
    void setViewMatrix(glm::mat4 _viewMatrix) { m_ViewMatrix = _viewMatrix; }

    /**
    * \brief Sets the Camera's Projection Matrix to the passed through variable
    */
    void setProjectionMatrix(glm::mat4 _projectionMatrix) { m_ProjectionMatrix = _projectionMatrix; }

    //Getters
    /**
    * \brief Returns the Camera's View Matrix
    */
    glm::mat4 getViewMatrix() { return m_ViewMatrix; }

    /**
    * \brief Returns the Camera's Projection Matrix
    */
    glm::mat4 getProjectionMatrix() { return m_ProjectionMatrix; }

  };

} //End of namespace

#endif // !_CAMERA_
