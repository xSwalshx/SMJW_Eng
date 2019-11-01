#include "Component.h"

#include <glm\glm.hpp>

class Transform : public Component
{
private:
  glm::vec3 m_Position;
  glm::vec3 m_Rotation;
  glm::vec3 m_Scale;

public:
  void setPosition(glm::vec3 _pos) { m_Position = _pos; }
  glm::vec3 getPosition() { return m_Position; }
  glm::mat4 getModel();

};