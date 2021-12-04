#include "MyWindow.h"
#include <iostream>
#include <GLAD/glad.h>

MyWindow::MyWindow(int w, int h, std::string name) : width{w}, height{h}, windowName{name}{
    initWindow();
}

MyWindow::~MyWindow() {
    glfwDestroyWindow(window);
    glfwTerminate();
}

bool MyWindow::shouldClose() {
    return glfwWindowShouldClose(window);
}

int MyWindow::initWindow() {
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    window = glfwCreateWindow(width, height, windowName.c_str(), NULL, NULL);
    if (window == NULL)
    {
        std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);
    glfwSetFramebufferSizeCallback(window, framebufferResizeCallback);
    if (!gladLoadGLLoader((GLADloadproc) glfwGetProcAddress)) {
        std::cout << "Failed to initialize OpenGL context" << std::endl;
        return -1;
    }

}

void MyWindow::framebufferResizeCallback(GLFWwindow *window, int width, int height) {
    glViewport(0, 0, width, height);
}