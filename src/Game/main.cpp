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
  std::shared_ptr<Eng::Core> core = Eng::Core::initialize();

  // Create a single in-game object
  std::shared_ptr<Eng::Entity> entity = core->addEntity();
  
  // Add a very simple component to it
  std::shared_ptr<Eng::Shader> shader = entity->addComponent<Eng::Shader>("../resources/simple.vert", "../resources/simple.frag");
  std::shared_ptr<Eng::Renderer> renderer = entity->addComponent<Eng::Renderer>();
  renderer->loadTexture("../resources/WoodCrateTexture.jpg");

  // Create a Camera
  std::shared_ptr<Eng::Entity> camera = core->addEntity();
  camera->addComponent<Eng::Transform>(); // Add the Transform Component
  camera->addComponent<Eng::Camera>();    // Add the Camera Component
  
  // Start the engine’s main loop
  core->start();
	
  return 0;
}