#include <iostream>

#include "../Core/Renderer.h"

int main() {
    std::cout << "PlayStation: ";
    auto r = Renderer();
    r.RenderScene();
}
