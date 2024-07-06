#pragma once
#include "bk_window.hpp"

namespace BK {
	class FirstApp
	{
	public:
		static constexpr int WIDTH = 800;
		static constexpr int HEIGHT = 600;
		void run();

	private:
		BK_Window BK_Window{ WIDTH,HEIGHT,"Hello Vulkan" };

	};


}