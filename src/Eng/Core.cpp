//Include Header Files
#include "Core.h"
#include "Entity.h"

std::shared_ptr<Core> Core::initialize()
{
  std::shared_ptr<Core> rtn = std::make_shared<Core>();

  return rtn;
}

std::shared_ptr<Entity> Core::addEntity()
{
  std::shared_ptr<Entity> rtn = std::make_shared<Entity>();

  entities.push_back(rtn);

  return rtn;
}

void Core::start()
{
  while(true)
  {
    for(size_t i = 0; i < entities.size(); i++)
    {
      entities.at(i)->update();
    }

    for(size_t i = 0; i < entities.size(); i++)
    {
      entities.at(i)->draw();
    }
  }

}