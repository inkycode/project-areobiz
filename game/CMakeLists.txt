add_executable(game src/main/c/game/game.c)

find_package(Vulkan REQUIRED)

target_include_directories(game
    PRIVATE
        ${Vulkan_INCLUDE_DIRS}
)

target_link_libraries(game
    PRIVATE
        glfw
        ${Vulkan_LIBRARIES}
)

target_link_libraries(game PRIVATE glfw)