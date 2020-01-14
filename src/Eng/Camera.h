#pragma once

#ifndef _CAMERA_
#define _CAMERA_

#include "Component.h"

#include <glm\glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

class Camera : public Component
{
private:
  //Variables
  glm::mat4 m_ViewMatrix;
  glm::vec3 m_CameraPos;
  glm::vec3 m_CameraFront;
  glm::vec3 m_CameraUp;

public:
  //initalize
  void onInit(glm::vec3 _cameraPos, glm::vec3 _cameraFront, glm::vec3 _cameraUp);

  //Setters
  void setViewMatrix(glm::mat4 _viewMatrix) { m_ViewMatrix = _viewMatrix; }
  void setCameraPos(glm::vec3 _cameraPos) { m_CameraPos = _cameraPos; }
  void setCameraFront(glm::vec3 _cameraFront) { m_CameraFront = _cameraFront; }
  void setCameraUp(glm::vec3 _cameraUp) { m_CameraUp = _cameraUp; }

  //Getters
  glm::mat4 getViewMatrix() { return m_ViewMatrix; }
  glm::vec3 getCameraPos() { return m_CameraPos; }
  glm::vec3 getCameraFront() { return m_CameraFront; }
  glm::vec3 getCameraUp() { return m_CameraUp; }

};

#endif // !_CAMERA_
