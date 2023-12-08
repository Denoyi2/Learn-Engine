#pragma once

#ifdef LEARN_PLATFORM_WINDOW
	#ifdef LEARN_BUILD_DLL
		#define LEARN_API __declspec(dllexport)
	#else
		#define LEARN_API __declspec(dllimport)
	#endif // LEARN_BUILD_DLL
#else
	#error Learn-Engine only support windows!
#endif // LEARN_PLATFORM_WINDOW
