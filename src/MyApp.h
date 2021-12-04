#pragma once

#include "MyWindow.h"

class MyApp {
    public:
    static const int WIDTH = 1280;
    static const int HEIGHT = 800;
    MyApp();
    ~MyApp();
    void run();

    private:
    MyWindow* window{WIDTH, HEIGHT, "My OpenGL Game Engine"};
};