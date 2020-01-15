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

  // Create 'Cube1'
  std::shared_ptr<Eng::Entity> cube1 = core->addEntity();
  std::shared_ptr<Eng::Transform> cubeTransform = cube1->addComponent<Eng::Transform>();
  cube1->getComponent<Eng::Transform>()->setPosition(glm::vec3(4.0f, 0.0f, -10.0f)); 
  cube1->getComponent<Eng::Transform>()->setRotation(glm::vec3(2.0f, 0.0f, 0.0f));
  cube1->getComponent<Eng::Transform>()->setScale(glm::vec3(1.0f, 1.0f, 1.0f));
  std::shared_ptr<Eng::Shader> cubeShader = cube1->addComponent<Eng::Shader>("../resources/shaders/simple.vert", "../resources/shaders/simple.frag");
  std::shared_ptr<Eng::Renderer> cubeRenderer = cube1->addComponent<Eng::Renderer>();
  cubeRenderer->loadTexture("../resources/textures/MinecraftDirt.jpg"); 



  // Create 'Camera'
  std::shared_ptr<Eng::Entity> cameraEntity = core->addEntity();
  std::shared_ptr<Eng::Transform> cameraTransform = cameraEntity->addComponent<Eng::Transform>();
  cameraEntity->getComponent<Eng::Transform>()->setPosition(glm::vec3(0.0f, 0.0f, 0.0f));
  std::shared_ptr<Eng::Camera> cameraCamera = cameraEntity->addComponent<Eng::Camera>();
  
  // Start the engine’s main loop
  core->start();
	
  return 0;
}