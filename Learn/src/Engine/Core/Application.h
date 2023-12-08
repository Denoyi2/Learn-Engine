#pragma once
#include "Core.h"

namespace Learn {

	class LEARN_API Application
	{
	public:
		Application();
		~Application();

		void Run();
	};

	// Define to by client
	Application* CreateApplication();
}
