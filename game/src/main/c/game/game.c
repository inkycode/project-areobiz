#include <stdio.h>

#include <GLFW/glfw3.h>

int main() {
    if (glfwInit()) {
        GLFWwindow* window = glfwCreateWindow(1600, 900, "Project Areobiz", NULL, NULL);

        while (!glfwWindowShouldClose(window)) {
            glfwPollEvents();
        }

        glfwDestroyWindow(window);

        glfwTerminate();
    }
}