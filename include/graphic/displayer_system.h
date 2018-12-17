#ifndef ACID_INCLUDE_DISPLAYER_SYSTEM_H_
#define ACID_INCLUDE_DISPLAYER_SYSTEM_H_


#include <SFML/Graphics.hpp>

#include <active_system.h>

class DisplayerSystem: public ActiveSystem<NoneNode> {
  public:
    DisplayerSystem(sf::RenderWindow* window):
    window(window) {}

    void execute() override {
        window->display();
        window->clear();
    }

  private:
    sf::RenderWindow* window;
};

#endif  // ACID_INCLUDE_DISPLAYER_SYSTEM_H_
