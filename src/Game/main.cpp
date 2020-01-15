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
  std::shared_ptr<Eng::Transform> cube1Transform = cube1->addComponent<Eng::Transform>();
  cube1->getComponent<Eng::Transform>()->setPosition(glm::vec3(-4.0f, 3.0f, -10.0f));
  cube1->getComponent<Eng::Transform>()->setRotation(glm::vec3(2.0f, 0.0f, 0.0f));
  cube1->getComponent<Eng::Transform>()->setRotationIncrement(glm::vec3(0.0f, 0.0f, 0.025f));
  cube1->getComponent<Eng::Transform>()->setScale(glm::vec3(1.0f, 1.0f, 1.0f));
  std::shared_ptr<Eng::Shader> cube1Shader = cube1->addComponent<Eng::Shader>("../resources/shaders/simple.vert", "../resources/shaders/simple.frag");
  std::shared_ptr<Eng::Renderer> cube1Renderer = cube1->addComponent<Eng::Renderer>();
  cube1Renderer->loadTexture("../resources/textures/1_Oak_Wood.jpg");

  // Create 'Cube2'
  std::shared_ptr<Eng::Entity> cube2 = core->addEntity();
  std::shared_ptr<Eng::Transform> cube2Transform = cube2->addComponent<Eng::Transform>();
  cube2->getComponent<Eng::Transform>()->setPosition(glm::vec3(-1.25f, 3.0f, -10.0f));
  cube2->getComponent<Eng::Transform>()->setRotation(glm::vec3(2.0f, 0.0f, 0.0f));
  cube2->getComponent<Eng::Transform>()->setRotationIncrement(glm::vec3(0.0f, 0.0f, 0.025f));
  cube2->getComponent<Eng::Transform>()->setScale(glm::vec3(1.0f, 1.0f, 1.0f));
  std::shared_ptr<Eng::Shader> cube2Shader = cube2->addComponent<Eng::Shader>("../resources/shaders/simple.vert", "../resources/shaders/simple.frag");
  std::shared_ptr<Eng::Renderer> cube2Renderer = cube2->addComponent<Eng::Renderer>();
  cube2Renderer->loadTexture("../resources/textures/2_Birch_Wood.jpg");

  // Create 'Cube3'
  std::shared_ptr<Eng::Entity> cube3 = core->addEntity();
  std::shared_ptr<Eng::Transform> cube3Transform = cube3->addComponent<Eng::Transform>();
  cube3->getComponent<Eng::Transform>()->setPosition(glm::vec3(1.25f, 3.0f, -10.0f));
  cube3->getComponent<Eng::Transform>()->setRotation(glm::vec3(2.0f, 0.0f, 0.0f));
  cube3->getComponent<Eng::Transform>()->setRotationIncrement(glm::vec3(0.0f, 0.0f, 0.025f));
  cube3->getComponent<Eng::Transform>()->setScale(glm::vec3(1.0f, 1.0f, 1.0f));
  std::shared_ptr<Eng::Shader> cube3Shader = cube3->addComponent<Eng::Shader>("../resources/shaders/simple.vert", "../resources/shaders/simple.frag");
  std::shared_ptr<Eng::Renderer> cube3Renderer = cube3->addComponent<Eng::Renderer>();
  cube3Renderer->loadTexture("../resources/textures/3_Spruse_Wood.jpg");

  // Create 'Cube4'
  std::shared_ptr<Eng::Entity> cube4 = core->addEntity();
  std::shared_ptr<Eng::Transform> cube4Transform = cube4->addComponent<Eng::Transform>();
  cube4->getComponent<Eng::Transform>()->setPosition(glm::vec3(4.0f, 3.0f, -10.0f));
  cube4->getComponent<Eng::Transform>()->setRotation(glm::vec3(2.0f, 0.0f, 0.0f));
  cube4->getComponent<Eng::Transform>()->setRotationIncrement(glm::vec3(0.0f, 0.0f, 0.025f));
  cube4->getComponent<Eng::Transform>()->setScale(glm::vec3(1.0f, 1.0f, 1.0f));
  std::shared_ptr<Eng::Shader> cube4Shader = cube4->addComponent<Eng::Shader>("../resources/shaders/simple.vert", "../resources/shaders/simple.frag");
  std::shared_ptr<Eng::Renderer> cube4Renderer = cube4->addComponent<Eng::Renderer>();
  cube4Renderer->loadTexture("../resources/textures/4_Jungle_Wood.jpg");

  // Create 'Cube5'
  std::shared_ptr<Eng::Entity> cube5 = core->addEntity();
  std::shared_ptr<Eng::Transform> cube5Transform = cube5->addComponent<Eng::Transform>();
  cube5->getComponent<Eng::Transform>()->setPosition(glm::vec3(-4.0f, 3.0f, -10.0f));
  cube5->getComponent<Eng::Transform>()->setRotation(glm::vec3(2.0f, 0.0f, 0.0f));
  cube5->getComponent<Eng::Transform>()->setRotationIncrement(glm::vec3(0.0f, 0.0f, 0.025f));
  cube5->getComponent<Eng::Transform>()->setScale(glm::vec3(1.0f, 1.0f, 1.0f));
  std::shared_ptr<Eng::Shader> cube5Shader = cube5->addComponent<Eng::Shader>("../resources/shaders/simple.vert", "../resources/shaders/simple.frag");
  std::shared_ptr<Eng::Renderer> cube5Renderer = cube5->addComponent<Eng::Renderer>();
  cube5Renderer->loadTexture("../resources/textures/1_Oak_Wood.jpg");

  // Create 'Cube6'
  std::shared_ptr<Eng::Entity> cube6 = core->addEntity();
  std::shared_ptr<Eng::Transform> cube6Transform = cube6->addComponent<Eng::Transform>();
  cube6->getComponent<Eng::Transform>()->setPosition(glm::vec3(-1.25f, 3.0f, -10.0f));
  cube6->getComponent<Eng::Transform>()->setRotation(glm::vec3(2.0f, 0.0f, 0.0f));
  cube6->getComponent<Eng::Transform>()->setRotationIncrement(glm::vec3(0.0f, 0.0f, 0.025f));
  cube6->getComponent<Eng::Transform>()->setScale(glm::vec3(1.0f, 1.0f, 1.0f));
  std::shared_ptr<Eng::Shader> cube6Shader = cube6->addComponent<Eng::Shader>("../resources/shaders/simple.vert", "../resources/shaders/simple.frag");
  std::shared_ptr<Eng::Renderer> cube6Renderer = cube6->addComponent<Eng::Renderer>();
  cube6Renderer->loadTexture("../resources/textures/2_Birch_Wood.jpg");

  // Create 'Cube7'
  std::shared_ptr<Eng::Entity> cube7 = core->addEntity();
  std::shared_ptr<Eng::Transform> cube7Transform = cube7->addComponent<Eng::Transform>();
  cube7->getComponent<Eng::Transform>()->setPosition(glm::vec3(1.25f, 3.0f, -10.0f));
  cube7->getComponent<Eng::Transform>()->setRotation(glm::vec3(2.0f, 0.0f, 0.0f));
  cube7->getComponent<Eng::Transform>()->setRotationIncrement(glm::vec3(0.0f, 0.0f, 0.025f));
  cube7->getComponent<Eng::Transform>()->setScale(glm::vec3(1.0f, 1.0f, 1.0f));
  std::shared_ptr<Eng::Shader> cube7Shader = cube7->addComponent<Eng::Shader>("../resources/shaders/simple.vert", "../resources/shaders/simple.frag");
  std::shared_ptr<Eng::Renderer> cube7Renderer = cube7->addComponent<Eng::Renderer>();
  cube7Renderer->loadTexture("../resources/textures/3_Spruse_Wood.jpg");

  // Create 'Cube8'
  std::shared_ptr<Eng::Entity> cube8 = core->addEntity();
  std::shared_ptr<Eng::Transform> cube8Transform = cube8->addComponent<Eng::Transform>();
  cube8->getComponent<Eng::Transform>()->setPosition(glm::vec3(4.0f, 3.0f, -10.0f));
  cube8->getComponent<Eng::Transform>()->setRotation(glm::vec3(2.0f, 0.0f, 0.0f));
  cube8->getComponent<Eng::Transform>()->setRotationIncrement(glm::vec3(0.0f, 0.0f, 0.025f));
  cube8->getComponent<Eng::Transform>()->setScale(glm::vec3(1.0f, 1.0f, 1.0f));
  std::shared_ptr<Eng::Shader> cube8Shader = cube8->addComponent<Eng::Shader>("../resources/shaders/simple.vert", "../resources/shaders/simple.frag");
  std::shared_ptr<Eng::Renderer> cube8Renderer = cube8->addComponent<Eng::Renderer>();
  cube8Renderer->loadTexture("../resources/textures/4_Jungle_Wood.jpg");

  // Create 'Cube9'
  std::shared_ptr<Eng::Entity> cube9 = core->addEntity();
  std::shared_ptr<Eng::Transform> cube9Transform = cube9->addComponent<Eng::Transform>();
  cube9->getComponent<Eng::Transform>()->setPosition(glm::vec3(-4.0f, 3.0f, -10.0f));
  cube9->getComponent<Eng::Transform>()->setRotation(glm::vec3(2.0f, 0.0f, 0.0f));
  cube9->getComponent<Eng::Transform>()->setRotationIncrement(glm::vec3(0.0f, 0.0f, 0.025f));
  cube9->getComponent<Eng::Transform>()->setScale(glm::vec3(1.0f, 1.0f, 1.0f));
  std::shared_ptr<Eng::Shader> cube9Shader = cube9->addComponent<Eng::Shader>("../resources/shaders/simple.vert", "../resources/shaders/simple.frag");
  std::shared_ptr<Eng::Renderer> cube9Renderer = cube9->addComponent<Eng::Renderer>();
  cube9Renderer->loadTexture("../resources/textures/1_Oak_Wood.jpg");

  // Create 'Cube10'
  std::shared_ptr<Eng::Entity> cube10 = core->addEntity();
  std::shared_ptr<Eng::Transform> cube10Transform = cube10->addComponent<Eng::Transform>();
  cube10->getComponent<Eng::Transform>()->setPosition(glm::vec3(-1.25f, 3.0f, -10.0f));
  cube10->getComponent<Eng::Transform>()->setRotation(glm::vec3(2.0f, 0.0f, 0.0f));
  cube10->getComponent<Eng::Transform>()->setRotationIncrement(glm::vec3(0.0f, 0.0f, 0.025f));
  cube10->getComponent<Eng::Transform>()->setScale(glm::vec3(1.0f, 1.0f, 1.0f));
  std::shared_ptr<Eng::Shader> cube10Shader = cube10->addComponent<Eng::Shader>("../resources/shaders/simple.vert", "../resources/shaders/simple.frag");
  std::shared_ptr<Eng::Renderer> cube10Renderer = cube10->addComponent<Eng::Renderer>();
  cube10Renderer->loadTexture("../resources/textures/2_Birch_Wood.jpg");

  // Create 'Cube11'
  std::shared_ptr<Eng::Entity> cube11 = core->addEntity();
  std::shared_ptr<Eng::Transform> cube11Transform = cube11->addComponent<Eng::Transform>();
  cube11->getComponent<Eng::Transform>()->setPosition(glm::vec3(1.25f, 3.0f, -10.0f));
  cube11->getComponent<Eng::Transform>()->setRotation(glm::vec3(2.0f, 0.0f, 0.0f));
  cube11->getComponent<Eng::Transform>()->setRotationIncrement(glm::vec3(0.0f, 0.0f, 0.025f));
  cube11->getComponent<Eng::Transform>()->setScale(glm::vec3(1.0f, 1.0f, 1.0f));
  std::shared_ptr<Eng::Shader> cube11Shader = cube11->addComponent<Eng::Shader>("../resources/shaders/simple.vert", "../resources/shaders/simple.frag");
  std::shared_ptr<Eng::Renderer> cube11Renderer = cube11->addComponent<Eng::Renderer>();
  cube11Renderer->loadTexture("../resources/textures/3_Spruse_Wood.jpg");

  // Create 'Cube12'
  std::shared_ptr<Eng::Entity> cube12 = core->addEntity();
  std::shared_ptr<Eng::Transform> cube12Transform = cube12->addComponent<Eng::Transform>();
  cube12->getComponent<Eng::Transform>()->setPosition(glm::vec3(4.0f, 3.0f, -10.0f));
  cube12->getComponent<Eng::Transform>()->setRotation(glm::vec3(2.0f, 0.0f, 0.0f));
  cube12->getComponent<Eng::Transform>()->setRotationIncrement(glm::vec3(0.0f, 0.0f, 0.025f));
  cube12->getComponent<Eng::Transform>()->setScale(glm::vec3(1.0f, 1.0f, 1.0f));
  std::shared_ptr<Eng::Shader> cube12Shader = cube12->addComponent<Eng::Shader>("../resources/shaders/simple.vert", "../resources/shaders/simple.frag");
  std::shared_ptr<Eng::Renderer> cube12Renderer = cube12->addComponent<Eng::Renderer>();
  cube12Renderer->loadTexture("../resources/textures/4_Jungle_Wood.jpg");

  // Create 'Cube13'
  std::shared_ptr<Eng::Entity> cube13 = core->addEntity();
  std::shared_ptr<Eng::Transform> cube13Transform = cube13->addComponent<Eng::Transform>();
  cube13->getComponent<Eng::Transform>()->setPosition(glm::vec3(-4.0f, 3.0f, -10.0f));
  cube13->getComponent<Eng::Transform>()->setRotation(glm::vec3(2.0f, 0.0f, 0.0f));
  cube13->getComponent<Eng::Transform>()->setRotationIncrement(glm::vec3(0.0f, 0.0f, 0.025f));
  cube13->getComponent<Eng::Transform>()->setScale(glm::vec3(1.0f, 1.0f, 1.0f));
  std::shared_ptr<Eng::Shader> cube13Shader = cube13->addComponent<Eng::Shader>("../resources/shaders/simple.vert", "../resources/shaders/simple.frag");
  std::shared_ptr<Eng::Renderer> cube13Renderer = cube13->addComponent<Eng::Renderer>();
  cube13Renderer->loadTexture("../resources/textures/1_Oak_Wood.jpg");

  // Create 'Cube14'
  std::shared_ptr<Eng::Entity> cube14 = core->addEntity();
  std::shared_ptr<Eng::Transform> cube14Transform = cube14->addComponent<Eng::Transform>();
  cube14->getComponent<Eng::Transform>()->setPosition(glm::vec3(-1.25f, 3.0f, -10.0f));
  cube14->getComponent<Eng::Transform>()->setRotation(glm::vec3(2.0f, 0.0f, 0.0f));
  cube14->getComponent<Eng::Transform>()->setRotationIncrement(glm::vec3(0.0f, 0.0f, 0.025f));
  cube14->getComponent<Eng::Transform>()->setScale(glm::vec3(1.0f, 1.0f, 1.0f));
  std::shared_ptr<Eng::Shader> cube14Shader = cube14->addComponent<Eng::Shader>("../resources/shaders/simple.vert", "../resources/shaders/simple.frag");
  std::shared_ptr<Eng::Renderer> cube14Renderer = cube14->addComponent<Eng::Renderer>();
  cube14Renderer->loadTexture("../resources/textures/2_Birch_Wood.jpg");

  // Create 'Cube15'
  std::shared_ptr<Eng::Entity> cube15 = core->addEntity();
  std::shared_ptr<Eng::Transform> cube15Transform = cube15->addComponent<Eng::Transform>();
  cube15->getComponent<Eng::Transform>()->setPosition(glm::vec3(1.25f, 3.0f, -10.0f));
  cube15->getComponent<Eng::Transform>()->setRotation(glm::vec3(2.0f, 0.0f, 0.0f));
  cube15->getComponent<Eng::Transform>()->setRotationIncrement(glm::vec3(0.0f, 0.0f, 0.025f));
  cube15->getComponent<Eng::Transform>()->setScale(glm::vec3(1.0f, 1.0f, 1.0f));
  std::shared_ptr<Eng::Shader> cube15Shader = cube15->addComponent<Eng::Shader>("../resources/shaders/simple.vert", "../resources/shaders/simple.frag");
  std::shared_ptr<Eng::Renderer> cube15Renderer = cube15->addComponent<Eng::Renderer>();
  cube15Renderer->loadTexture("../resources/textures/3_Spruse_Wood.jpg");

  // Create 'Cube16'
  std::shared_ptr<Eng::Entity> cube16 = core->addEntity();
  std::shared_ptr<Eng::Transform> cube16Transform = cube16->addComponent<Eng::Transform>();
  cube16->getComponent<Eng::Transform>()->setPosition(glm::vec3(4.0f, 3.0f, -10.0f));
  cube16->getComponent<Eng::Transform>()->setRotation(glm::vec3(2.0f, 0.0f, 0.0f));
  cube16->getComponent<Eng::Transform>()->setRotationIncrement(glm::vec3(0.0f, 0.0f, 0.025f));
  cube16->getComponent<Eng::Transform>()->setScale(glm::vec3(1.0f, 1.0f, 1.0f));
  std::shared_ptr<Eng::Shader> cube16Shader = cube16->addComponent<Eng::Shader>("../resources/shaders/simple.vert", "../resources/shaders/simple.frag");
  std::shared_ptr<Eng::Renderer> cube16Renderer = cube16->addComponent<Eng::Renderer>();
  cube16Renderer->loadTexture("../resources/textures/4_Jungle_Wood.jpg");

  // Create 'Cube17'
  std::shared_ptr<Eng::Entity> cube17 = core->addEntity();
  std::shared_ptr<Eng::Transform> cube17Transform = cube17->addComponent<Eng::Transform>();
  cube17->getComponent<Eng::Transform>()->setPosition(glm::vec3(-4.0f, 3.0f, -10.0f));
  cube17->getComponent<Eng::Transform>()->setRotation(glm::vec3(2.0f, 0.0f, 0.0f));
  cube17->getComponent<Eng::Transform>()->setRotationIncrement(glm::vec3(0.0f, 0.0f, 0.025f));
  cube17->getComponent<Eng::Transform>()->setScale(glm::vec3(1.0f, 1.0f, 1.0f));
  std::shared_ptr<Eng::Shader> cube17Shader = cube17->addComponent<Eng::Shader>("../resources/shaders/simple.vert", "../resources/shaders/simple.frag");
  std::shared_ptr<Eng::Renderer> cube17Renderer = cube17->addComponent<Eng::Renderer>();
  cube17Renderer->loadTexture("../resources/textures/1_Oak_Wood.jpg");

  // Create 'Cube18'
  std::shared_ptr<Eng::Entity> cube18 = core->addEntity();
  std::shared_ptr<Eng::Transform> cube18Transform = cube18->addComponent<Eng::Transform>();
  cube18->getComponent<Eng::Transform>()->setPosition(glm::vec3(-1.25f, 3.0f, -10.0f));
  cube18->getComponent<Eng::Transform>()->setRotation(glm::vec3(2.0f, 0.0f, 0.0f));
  cube18->getComponent<Eng::Transform>()->setRotationIncrement(glm::vec3(0.0f, 0.0f, 0.025f));
  cube18->getComponent<Eng::Transform>()->setScale(glm::vec3(1.0f, 1.0f, 1.0f));
  std::shared_ptr<Eng::Shader> cube18Shader = cube18->addComponent<Eng::Shader>("../resources/shaders/simple.vert", "../resources/shaders/simpleRed.frag");
  std::shared_ptr<Eng::Renderer> cube18Renderer = cube18->addComponent<Eng::Renderer>();

  // Create 'Cube19'
  std::shared_ptr<Eng::Entity> cube19 = core->addEntity();
  std::shared_ptr<Eng::Transform> cube19Transform = cube19->addComponent<Eng::Transform>();
  cube19->getComponent<Eng::Transform>()->setPosition(glm::vec3(1.25f, 3.0f, -10.0f));
  cube19->getComponent<Eng::Transform>()->setRotation(glm::vec3(2.0f, 0.0f, 0.0f));
  cube19->getComponent<Eng::Transform>()->setRotationIncrement(glm::vec3(0.0f, 0.0f, 0.025f));
  cube19->getComponent<Eng::Transform>()->setScale(glm::vec3(1.0f, 1.0f, 1.0f));
  std::shared_ptr<Eng::Shader> cube19Shader = cube19->addComponent<Eng::Shader>("../resources/shaders/simple.vert", "../resources/shaders/simpleGreen.frag");
  std::shared_ptr<Eng::Renderer> cube19Renderer = cube19->addComponent<Eng::Renderer>();

  // Create 'Cube20'
  std::shared_ptr<Eng::Entity> cube20 = core->addEntity();
  std::shared_ptr<Eng::Transform> cube20Transform = cube20->addComponent<Eng::Transform>();
  cube20->getComponent<Eng::Transform>()->setPosition(glm::vec3(4.0f, 3.0f, -10.0f));
  cube20->getComponent<Eng::Transform>()->setRotation(glm::vec3(2.0f, 0.0f, 0.0f));
  cube20->getComponent<Eng::Transform>()->setRotationIncrement(glm::vec3(0.0f, 0.0f, 0.025f));
  cube20->getComponent<Eng::Transform>()->setScale(glm::vec3(1.0f, 1.0f, 1.0f));
  std::shared_ptr<Eng::Shader> cube20Shader = cube20->addComponent<Eng::Shader>("../resources/shaders/simple.vert", "../resources/shaders/simpleBlue.frag");
  std::shared_ptr<Eng::Renderer> cube20Renderer = cube20->addComponent<Eng::Renderer>();

  // Create 'Camera'
  std::shared_ptr<Eng::Entity> cameraEntity = core->addEntity();
  std::shared_ptr<Eng::Transform> cameraTransform = cameraEntity->addComponent<Eng::Transform>();
  cameraEntity->getComponent<Eng::Transform>()->setPosition(glm::vec3(0.0f, 0.0f, 0.0f));
  std::shared_ptr<Eng::Camera> cameraCamera = cameraEntity->addComponent<Eng::Camera>();

  // Start the engine’s main loop
  core->start();

  return 0;
}