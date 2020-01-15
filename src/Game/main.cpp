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

  // Create a cube
  std::shared_ptr<Eng::Entity> cubeEntity = core->addEntity();
  std::shared_ptr<Eng::Transform> cubeTransform = cubeEntity->addComponent<Eng::Transform>();
  cubeEntity->getComponent<Eng::Transform>()->setPosition(glm::vec3(0.0f, 0.0f, -10.0f));
  std::shared_ptr<Eng::Shader> cubeShader = cubeEntity->addComponent<Eng::Shader>("../resources/simple.vert", "../resources/simple.frag");
  std::shared_ptr<Eng::Renderer> cubeRenderer = cubeEntity->addComponent<Eng::Renderer>();
  cubeRenderer->loadTexture("../resources/WoodCrateTexture.jpg");

  // Create a Camera
  std::shared_ptr<Eng::Entity> cameraEntity = core->addEntity();
  std::shared_ptr<Eng::Transform> cameraTransform = cameraEntity->addComponent<Eng::Transform>(); // Add the Transform Component
  cameraEntity->getComponent<Eng::Transform>()->setPosition(glm::vec3(0.0f, 0.0f, 0.0f));
  std::shared_ptr<Eng::Camera> cameraCamera = cameraEntity->addComponent<Eng::Camera>();    // Add the Camera Component
  
  // Start the engine’s main loop
  core->start();
	
  return 0;
}