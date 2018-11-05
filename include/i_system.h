#ifndef ACID_INCLUDE_I_SYSTEM_H_
#define ACID_INCLUDE_I_SYSTEM_H_


#include <event_manager.h>
#include <entity_life_queue.h>

template <class T>
class ISystem {
  public:
    ISystem(EventManager* event_manager, EntityLifeQueue* queue);
    virtual ~ISystem();
    virtual void execute() = 0;

  protected:
    EventManager* event_manager;
    EntityLifeQueue* entity_life_queue;
};

#endif  // ACID_INCLUDE_I_SYSTEM_H_