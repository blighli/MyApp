#include "MyWindow.h"
#include <iostream>

MyWindow::MyWindow(int w, int h, std::string name) {
    this->width = w;
    this->height = h;
    this->windowName = name;
}

MyWindow::~MyWindow() {
    glfwDestroyWindow(window);
    glfwTerminate();
}


void MyWindow::initWindow() {
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    window = glfwCreateWindow(width, height, windowName.c_str(), NULL, NULL);
    if (window == NULL)
    {
        std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return;
    }
    glfwMakeContextCurrent(window);

}