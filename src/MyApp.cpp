#include "MyApp.h"

MyApp::MyApp() {

}

MyApp::~MyApp() {

}

void MyApp::run() {
    while (!window->shouldClose())
    {
        //processInput(window);

        glClearColor(0.0f, 0.0f, 1.0f, 0.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        //Render Here

        //glfwSwapBuffers(window);
        glfwPollEvents();
    }
}