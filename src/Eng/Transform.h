#include "Component.h"

#include <glm\glm.hpp>
 
namespace Eng
{

  class Transform : public Component
  {
  private:
    //Variables
    glm::mat4 m_Transform = glm::mat4(1.0f); //Initialize to identity matrix
    glm::vec3 m_Position;
    glm::vec3 m_Rotation = glm::vec3 (0.0f,0.0f,0.0f);
	glm::vec3 m_RotationIncrement = glm::vec3(0.0f, 0.0f, 0.0f);
	glm::vec3 m_Scale = glm::vec3(2.5f);
    glm::vec3 m_Front;
    glm::vec3 m_Up;

  public:

    //Getters
    glm::mat4 getModel();
    glm::mat4 getTransform() { return m_Transform; }
    glm::vec3 getPosition() { return m_Position; }
	glm::vec3 getRotation() { return m_Rotation; }
	glm::vec3 getRotationIncrement() { return m_RotationIncrement; }
    glm::vec3 getScale() { return m_Scale; }
    glm::vec3 getFront() { return m_Front; }
    glm::vec3 getUp() { return m_Up; }

    //Setters
    void setTransform(glm::mat4 _transform) { m_Transform = _transform; }
    void setPosition(glm::vec3 _position) { m_Position = _position; }
	void setRotation(glm::vec3 _rotation) { m_Rotation = _rotation; }
	void setRotationIncrement(glm::vec3 _rotationIncrement) { m_RotationIncrement = _rotationIncrement; }
    void setScale(glm::vec3 _scale) { m_Scale = _scale; }
    void setFront(glm::vec3 _front) { m_Front = _front; }
    void setUp(glm::vec3 _up) { m_Up = _up; }
  };

} //End of Namespace