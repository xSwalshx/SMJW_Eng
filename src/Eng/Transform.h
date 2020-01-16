#include "Component.h"

#include <glm\glm.hpp>

namespace Eng
{
  /**
  * Represents the Transform Class
  * This is a derived class of Component
  * It handles all the tranform locations of objects in the game
  */
  class Transform : public Component
  {
  private:
    //Variables
    glm::mat4 m_Transform = glm::mat4(1.0f);                      ///< 4x4 Identity Matrix
    glm::vec3 m_Position = glm::vec3(0.0f,0.0f, 0.0f);            ///< Vector 3 for Position - Set to 0 by default
    glm::vec3 m_Rotation = glm::vec3(0.0f, 0.0f, 0.0f);           ///< Vector 3 for Rotation - Set to 0 by default
    glm::vec3 m_RotationIncrement = glm::vec3(0.0f, 0.0f, 0.0f);  ///< Vector 3 for Rotation Increment - Set to 0 so the cube wont rotate automatically
    glm::vec3 m_Scale = glm::vec3(2.5f);                          ///< Vector 3 for Scale - Set to 2.5f by default incase the user does not define

  public:

    //Getters
    /**
    * \breif Gets the Model Matrix Value
    * 
    * @return 4x4 Model Matrix
    */
    glm::mat4 getModel();

    /**
    * \breif Gets the Transform Value
    *
    * @return 4x4 Transform Identy Matrix 'm_Transform'
    */
    glm::mat4 getTransform() { return m_Transform; }

    /**
    * \brief Gets the Position Value
    * 
    * @return Vector3 Position Values 'm_Position'
    */
    glm::vec3 getPosition() { return m_Position; }

    /**
    * \brief Gets the Rotation Value
    *
    * @return Vector3 Rotation Values 'm_Rotation'
    */
    glm::vec3 getRotation() { return m_Rotation; }

    /**
    * \brief Gets the Rotation Increment Value
    *
    * @return Vector3 RotationIncrement Values 'm_RotationIncrement'
    */
    glm::vec3 getRotationIncrement() { return m_RotationIncrement; }

    /**
    * \brief Gets the Scale Value
    *
    * @return Vector3 Scale Values 'm_Scale'
    */
    glm::vec3 getScale() { return m_Scale; }

    //Setters
    /**
    * \brief Sets the Transform Matrix
    *
    * @param[in] 4x4 Matrix
    */
    void setTransform(glm::mat4 _transform) { m_Transform = _transform; }

    /**
    * \brief Sets the Position Vector 'm_Position'
    *
    * @param[in] Vector3
    */
    void setPosition(glm::vec3 _position) { m_Position = _position; }

    /**
    * \brief Sets the Rotation Vector 'm_Rotation'
    *
    * @param[in] Vector3
    */
    void setRotation(glm::vec3 _rotation) { m_Rotation = _rotation; }

    /**
    * \brief Sets the RotationIncrement Vector 'm_RotationIncrement'
    *
    * @param[in] Vector3
    */
    void setRotationIncrement(glm::vec3 _rotationIncrement) { m_RotationIncrement = _rotationIncrement; }

    /**
    * \brief Sets the Scale Vector 'm_Scale'
    *
    * @param[in] Vector3
    */
    void setScale(glm::vec3 _scale) { m_Scale = _scale; }
  };

} //End of Namespace