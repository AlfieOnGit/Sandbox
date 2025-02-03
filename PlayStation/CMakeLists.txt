add_executable(PlayStation main.cpp)

include_directories(../Core)

target_link_libraries(PlayStation LINK_PUBLIC Core)