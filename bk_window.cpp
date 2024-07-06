#include "bk_window.hpp"
#include <stdexcept> // تأكد من تضمين هذه الترويسة لاستخدام std::runtime_error

namespace BK
{
    // تهيئة النافذة باالاعدادات
    BK_Window::BK_Window(int w, int h, std::string name) : width{ w }, height{ h }, windowName{ std::move(name) }
    {
        initWindow();
    }

    BK_Window::~BK_Window()
    {
        glfwDestroyWindow(window);
        glfwTerminate();
    }

    // اعداد النافذة
    void BK_Window::initWindow()
    {
        if (!glfwInit())
        {
            throw std::runtime_error("Failed to initialize GLFW");
        }
        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
        glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

        window = glfwCreateWindow(width, height, windowName.c_str(), nullptr, nullptr);
        if (!window)
        {
            glfwTerminate();
            throw std::runtime_error("Failed to create GLFW window");
        }
    }
}