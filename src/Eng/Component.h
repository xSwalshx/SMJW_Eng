#ifndef MYENGINE_COMPONENT_H
#define MYENGINE_COMPONENT_H

#include <memory>

namespace Eng
{

  class Entity;
  class Core;

  /**
  * Represents a Component of the CES system
  * Every Component hense force inherits from this class
  */
  class Component
  {
    friend class Entity; ///Enables Component class to access the Entity class' private and protected members

  public:
    /**
    * \brief Decstrucor for a component object
    */
    virtual ~Component();

    /**
    * \brief Returns a weak pointer of type Entity
    */
    std::shared_ptr<Core> getCore();

    /**
    * \brief Returns a shared pointer of type Core
    */
    std::shared_ptr<Entity> getEntity();

  private:
    //Variables
    std::weak_ptr<Entity> entity; ///Weak pointer of type Entity 
    bool began;                   ///Boolean to control ticks for Components with Entity

    /**
    * \brief Virtual on Initalize function
    * This function can be overiden by a derrived class.
    */
    virtual void onInit();

    /**
    * \brief Virtual on Begin function
    * This function can be overiden by a derrived class.
    */
    virtual void onBegin();

    /**
    * \brief Virtual on Tick function
    * This function can be overiden by a derrived class.
    */
    virtual void onTick();

    /**
    * \brief Virtual on Display function
    * This function can be overiden by a derrived class.
    */
    virtual void onDisplay();
  };

} //End of namespace

#endif