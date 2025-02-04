file(GLOB Headers "${CMAKE_CURRENT_SOURCE_DIR}/*.h")
file(GLOB Sources "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")

add_executable(Windows
        ${Headers}
        ${Sources})

include_directories(../Core)

target_link_libraries(Windows LINK_PUBLIC Core)
