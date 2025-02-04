Example of using separate headers and source files to achieve multi-platform handling

Project file structure:
```
Project
-| CMakeLists.txt
-| Core
  -| CMakeLists.txt
  -| Game.h
  -| Renderer.h
-| PlayStation
  -| CMakeLists.txt
  -| main.cpp
  -| Renderer.cpp
-| Windows
  -| CMakeLists.txt
  -| main.cpp
  -| Renderer.cpp
