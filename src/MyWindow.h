#pragma once

#include <GLFW/glfw3.h>
#include <string>

class MyWindow {
    public:
    MyWindow(int w, int h, std::string name);
    ~MyWindow();

    private:
    void initWindow();
    int width;
    int height;
    std::string windowName;
    GLFWwindow* window;
};