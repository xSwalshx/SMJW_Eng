#include "Component.h"

#include <glm\glm.hpp>

class Transform : public Component
{
private:
  //Variables
  glm::mat4 m_Transform = glm::mat4(1.0f); //Initialize to identity matrix
  glm::vec3 m_Position;
  glm::vec3 m_Rotation;
  glm::vec3 m_Scale;

public:
  
  //Getters
  glm::mat4 getModel();
  glm::mat4 getTransform() { return m_Transform; }
  glm::vec3 getPosition() { return m_Position; }
  glm::vec3 getRotation() { return m_Rotation; }
  glm::vec3 getScale() { return m_Scale; }

  //Setters
  void setTransform(glm::mat4 _transform) { m_Transform = _transform; }
  void setPosition(glm::vec3 _position) { m_Position = _position; }
  void setRotation(glm::vec3 _rotation) { m_Rotation = _rotation; }
  void setScale(glm::vec3 _scale) { m_Scale = _scale; }
};