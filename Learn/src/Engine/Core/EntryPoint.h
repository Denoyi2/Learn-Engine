#pragma once
#include "Application.h"

int main(int argc, char** argv[])
{
	auto app = Learn::CreateApplication();
	app->Run();
	delete app;
}
