#include <iostream>
#include <GLAD/glad.h>
#include <GLFW/glfw3.h>
#include <FreeImage/FreeImage.h>

int main() {
    glfwInit();
    if (!gladLoadGLLoader((GLADloadproc) glfwGetProcAddress)) {
        std::cout << "Failed to initialize OpenGL context" << std::endl;
        return -1;
    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
