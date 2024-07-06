#include "first_app.hpp"

namespace BK {

	void FirstApp::run() {
		while (!BK_Window.shouldClose()) {
			glfwPollEvents();

		}
	}


}