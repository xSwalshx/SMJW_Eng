#include "Camera.h"

void Camera::onInit(glm::vec3 _cameraPos, glm::vec3 _cameraFront, glm::vec3 _cameraUp)
{
  setCameraPos(_cameraPos);
  setCameraFront(_cameraFront);
  setCameraUp(_cameraUp);

  glm::mat4 _view = glm::lookAt(_cameraPos, _cameraPos + _cameraFront, _cameraUp);
  setViewMatrix(_view);
}