#include <stdio.h>

#include <vulkan/vulkan.h>
#include <GLFW/glfw3.h>

int main() {
    if (glfwInit()) {
        if (glfwVulkanSupported()) {
            printf("Vulkan supported!\n");
        } else {
            printf("Vulkan not supported!\n");
        }

        GLFWwindow* window = glfwCreateWindow(1600, 900, "Project Areobiz", NULL, NULL);

        while (!glfwWindowShouldClose(window)) {
            glfwPollEvents();
        }

        glfwDestroyWindow(window);

        glfwTerminate();
    }
}