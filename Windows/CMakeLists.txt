add_executable(Windows main.cpp
        Renderer.cpp)

include_directories(../Core)

target_link_libraries(Windows LINK_PUBLIC Core)
