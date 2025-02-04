#include "Game.h"
#include "Renderer.h"

int main() {
    auto r = Renderer();
    auto g = Game(r);
    g.renderer.RenderScene();
}
