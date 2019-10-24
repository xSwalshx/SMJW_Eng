#include "Entity.h"
#include "Component.h"

//Fucntions
void Entity::update()
{
  for(size_t i = 0; i < components.size(); i++)
  {
    components.at(i)->update();
  } 
}

void Entity::draw()
{
  for(size_t i = 0; i < components.size(); i++)
  {
    components.at(i)->draw();
  } 
}