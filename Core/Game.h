//
// Created by c1012538 on 03/02/2025.
//

#ifndef GAME_H
#define GAME_H
#include "Renderer.h"

class Game {
public:
    Game(Renderer renderer) : renderer(renderer) { }

    Renderer renderer;
};

#endif //GAME_H
