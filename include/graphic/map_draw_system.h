#ifndef ACID_INCLUDE_MAP_DRAW_SYSTEM_H_
#define ACID_INCLUDE_MAP_DRAW_SYSTEM_H_


#include <active_system.h>
#include <tmx_level.h>

class MapSystem : public ActiveSystem<NoneNode> {
  public:
    MapSystem(sf::RenderWindow* window, tmx_level &level):
    window(window),
    level(level) {}

    ~MapSystem() override = default;

    void execute() override {
        level.Draw(*window);
    }

  private:
    sf::RenderWindow* window;
    tmx_level level;
};

#endif  // ACID_INCLUDE_MAP_DRAW_SYSTEM_H_
