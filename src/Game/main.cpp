//Local Includes
#include "TriangleRenderer.h"

//Include Libraries
#include <Eng/Eng.h>

//Include System Includes
#include <iostream>

//Main Functions
int main()
{
	std::cout << "Hello SMJW_Eng" << std::endl;
  
  // Initialize our engine
  std::shared_ptr<Core> core = Core::initialize();

  // Create a single in-game object
  std::shared_ptr<Entity> entity = core->addEntity();
  
  // Add a very simple component to it
  std::shared_ptr<TriangleRenderer> tr = entity->addComponent<TriangleRenderer>();
  //std::shared_ptr<Component> testScreen = entity->addComponent<Component>();
  // Start the engine’s main loop
  core->start();
	
	return 0;
}