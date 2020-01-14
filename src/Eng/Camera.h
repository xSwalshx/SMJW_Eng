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

  public:
    //initalize
    void onInit();

    //Setters
    void setViewMatrix(glm::mat4 _viewMatrix) { m_ViewMatrix = _viewMatrix; }

    //Getters
    glm::mat4 getViewMatrix() { return m_ViewMatrix; }

  };

} //End of namespace

#endif // !_CAMERA_
