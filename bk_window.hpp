#pragma once

#define GLFW_INCLUDE_VULKAN

#include <GLFW/glfw3.h>
#include <string>

// TODO: الفئة الرئيسية لانشاء النافذة

namespace BK
{

    class BK_Window
    {
    public:
        BK_Window(int w, int h, std::string name);
        ~BK_Window();

        bool shouldClose()
        {
            return glfwWindowShouldClose(window);
        }

        BK_Window(const BK_Window&) = delete;
        BK_Window& operator=(const BK_Window&) = delete;

    private:
        void initWindow();
        const int width;
        const int height;
        std::string windowName;
        GLFWwindow* window;
    };

}