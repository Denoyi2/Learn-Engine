#pragma once
#include "Application.h"
#include "Utility/Log/Log.h"

int main(int argc, char** argv[])
{
	INFO_LOG ("Welcome to Learn-Engine\n");
	ERROR_LOG ("Welcome to Learn-Engine\n");
	WARN_LOG ("Welcome to Learn-Engine\n");
	TRACE_LOG ("Welcome to Learn-Engine\n");
	auto app = Learn::CreateApplication();
	app->Run();
	delete app;
}
