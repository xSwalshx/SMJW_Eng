#pragma once

#ifndef _CAMERA_
#define _CAMERA_

#include "Component.h"

#include <glm\glm.hpp>

class Camera : public Component
{
private:
  glm::mat4 m_View;

public:
   


};

#endif // !_CAMERA_
