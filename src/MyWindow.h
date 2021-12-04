#pragma once

#include <GLFW/glfw3.h>
#include <string>

class MyWindow {
    public:
    MyWindow(int w, int h, std::string name);
    ~MyWindow();
    bool shouldClose();

    private:
    static void framebufferResizeCallback(GLFWwindow *window, int width, int height);
    int initWindow();
    int width;
    int height;
    std::string windowName;
    GLFWwindow* window;
};