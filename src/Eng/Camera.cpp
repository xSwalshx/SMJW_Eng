#include "Camera.h"

#include "Entity.h"

#include "Transform.h"

namespace Eng
{

  void Camera::onInit()
  {
    glm::vec3 _pos = getEntity()->getComponent<Transform>()->getPosition();
    glm::vec3 _front = getEntity()->getComponent<Transform>()->getFront();
    glm::vec3 _up = getEntity()->getComponent<Transform>()->getUp();

    glm::mat4 _view = glm::lookAt(_pos, _pos + _front, _up);
    setViewMatrix(_view);
  }

} //End of namespace
