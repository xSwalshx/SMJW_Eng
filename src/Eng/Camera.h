#pragma once

#ifndef _CAMERA_
#define _CAMERA_

#include "Component.h"

#include <glm\glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

namespace Eng
{

  class Camera : public Component
  {
  private:
    //Variables
    glm::mat4 m_ViewMatrix;
    glm::mat4 m_ProjectionMatrix;

  public:
    //initalize
    void onInit();

    //Setters
    void setViewMatrix(glm::mat4 _viewMatrix) { m_ViewMatrix = _viewMatrix; }
    void setProjectionMatrix(glm::mat4 _projectionMatrix) { m_ProjectionMatrix = _projectionMatrix; }

    //Getters
    glm::mat4 getViewMatrix() { return m_ViewMatrix; }
    glm::mat4 getProjectionMatrix() { return m_ProjectionMatrix; }

  };

} //End of namespace

#endif // !_CAMERA_
