#ifndef GAME_H
#define GAME_H
#include "Renderer.h"

class Game {
public:
    Game(Renderer renderer) : renderer(renderer) { }

    Renderer renderer;
};

#endif //GAME_H
