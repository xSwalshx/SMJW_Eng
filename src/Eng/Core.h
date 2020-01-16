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

    /**
    * \brief Add Entity Function
    * This function adds an entity object to the vector list of entities
    */
    std::shared_ptr<Entity> addEntity();

    const float m_WindowWidth = 800;                  ///<Float to define the SDL Window Width
    const float m_WindowHeight = 600;                 ///<Float to define the SDL Window Height

  private:
    bool running;                                     ///<Running Boolean to control the game loop
    std::vector<std::shared_ptr<Entity> > entities;   ///<Vector list of type Entity - Every Entity in the game will be in this list
    std::weak_ptr<Core> self;                         ///<Weak pointer of Core points to itself. This is used in the Initalize function

    SDL_Window *window;                               ///<Variable name for SDL Window. Used in the Initialize function to create a window

  };

} //End of namespace
