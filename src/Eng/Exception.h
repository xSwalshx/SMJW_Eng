#include <exception>
#include <string>

namespace Eng
{

  struct Exception : public std::exception
  {
    Exception(const std::string& message);
    virtual ~Exception() throw();
    virtual const char* what() const throw();

  private:
    std::string message;

  };

} //End of namespace

