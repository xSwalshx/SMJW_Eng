#include "Transform.h"

#include <glm/ext.hpp>

namespace Eng
{

  //Get Model Function
  glm::mat4 Transform::getModel()
  {
    glm::mat4 rtn(1.0f);
    rtn = glm::translate(rtn, m_Position);
    rtn = glm::rotate(rtn, m_Rotation.x, glm::vec3(1, 0, 0));
    rtn = glm::rotate(rtn, m_Rotation.y, glm::vec3(0, 1, 0));
    rtn = glm::rotate(rtn, m_Rotation.z, glm::vec3(0, 0, 1));
    rtn = glm::scale(rtn, m_Scale);

    return rtn;
  }

} //End of namespace
