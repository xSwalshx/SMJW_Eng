//Local Includes

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
  Shader shader("../resources/simple.vert", "../resources/simple.frag");
  std::shared_ptr<Renderer> renderer = entity->addComponent<Renderer>();
  renderer->loadTexture("../resources/WoodCrateTexture.jpg");

  //std::shared_ptr<Component> testScreen = entity->addComponent<Component>();
  // Start the engine’s main loop
  core->start();
	
  return 0;
}