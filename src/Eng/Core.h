#include <SDL2/SDL.h>

#include <memory>
#include <vector>

namespace Eng
{

  class Entity;

  /**
  * Represents the Core of the Engine
  * Everything runs through this class including the game loop
  */
  class Core
  {
  public:
    /**
    * \breif Initialize the Engine
    * By Initializing the engine it creates an SDL Window
    * By being static it allows this function to be called even if there is no Core object in the game.
    */
    static std::shared_ptr<Core> initialize();

    /*
    * \brief Start function 
    * This function starts the game loop and will us the running boolean to control if the window is to be closed.
    * It also iterated through all Entity objects in the vector list of Entities and calls tick and display.
    */
    void start();

    /*
    * \brief Stop function
    * This function will change the running bool to false which will interupt and close the game loop in the function start
    */
    void stop();

    std::shared_ptr<Entity> addEntity();

    const float m_WindowWidth = 800;
    const float m_WindowHeight = 600;

  private:
    bool running;
    std::vector<std::shared_ptr<Entity> > entities;
    std::weak_ptr<Core> self;

    SDL_Window *window;

  };

} //End of namespace
