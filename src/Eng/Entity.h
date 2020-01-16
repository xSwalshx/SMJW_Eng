#include "Component.h"

#include <memory>
#include <vector>

namespace Eng
{
  /**
  * \brief Defines an 'ADDCOMPONENT' function using the '#define directive'
  */
#define ADDCOMPONENT \
  std::shared_ptr<T> rtn = std::make_shared<T>(); \
  rtn->entity = self; \
  rtn->began = false; \
  components.push_back(rtn);


  class Core;

  /**
  * Every object in the game is an Entity
  * This is the base class for all objects.
  */
  class Entity
  {
    friend class Core;    ///<Enables the Entity class to access all of the private and protected members of class Core.

  public:
    template <typename T> ///<Template type for a Component Type

    /**
    * \brief Gets the Component type of the type passed through
    * The component if there is one is then returned to where it is called.
    * If there is no compoent of type passed through an exception is called.
    */
    std::shared_ptr<T> getComponent()
    {
      for (size_t i = 0; i < components.size(); i++)
      {
        std::shared_ptr<T> tst = std::dynamic_pointer_cast<T>(components.at(i));

        if (tst)
        {
          return tst;
        }
      }

      throw std::exception();
    }

    /**
    * \breif Adds a Component type of the type passed through
    *
    * @tparam Component of Type T
    *
    * @return Shared Pointer of Type Component T
    */
    template <typename T>
    std::shared_ptr<T> addComponent()
    {
      ADDCOMPONENT
        rtn->onInit();

      return rtn;
    }

    /**
    * \breif Adds a Component type of the type passed through
    *
    * @tparam Component of Type A
    *
    * @return Shared Pointer of Type Component A
    */
    template <typename T, typename A>
    std::shared_ptr<T> addComponent(A a)
    {
      ADDCOMPONENT
        rtn->onInit(a);

      return rtn;
    }

    /**
    * \breif Adds a Component type of the type passed through
    * 
    * @tparam Component of Type A
    * @tparam Component of Type B
    *
    * @return Shared Pointer of Type Component A and B
    */
    template <typename T, typename A, typename B>
    std::shared_ptr<T> addComponent(A a, B b)
    {
      ADDCOMPONENT
        rtn->onInit(a, b);

      return rtn;
    }

    /**
    * \brief Get the Core of the Engine
    *
    * @return Core
    */
    std::shared_ptr<Core> getCore();

  private:
    std::weak_ptr<Entity> self;                           ///< Weak Pointer to itself 'Entity'
    std::weak_ptr<Core> core;                             ///< Weak Pointer to the 'Core'
    std::vector<std::shared_ptr<Component> > components;  ///< Vector list of type Component. This will contain all the components that the entity has


    /**
    * \brief Tick function
    * This will call all of the Components in the vector list 'components' onBegin function
    * Then will call all of the Components in the vector list 'components' onTick function
    */
    void tick();

    /**
    * \brief Display funcion
    * This will call all of the Components in the vector list 'components' onDisplay function
    */
    void display();

  };

} //End of namespace
