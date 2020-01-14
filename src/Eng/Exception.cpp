#include "Exception.h"

#include <GL/glew.h>

#include <iostream>

namespace Eng
{

  Exception::Exception(const std::string& message)
  {
    this->message = message;
  }

  Exception::~Exception() throw() { }

  const char* Exception::what() const throw()
  {
    return message.c_str();
  }

} //End of namespace

