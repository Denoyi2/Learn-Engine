#include "Learn.h"

class SandboxApp : public Learn::Application
{
public:
	SandboxApp();
	~SandboxApp();

private:

};

SandboxApp::SandboxApp()
{
}

SandboxApp::~SandboxApp()
{
}

Learn::Application* Learn::CreateApplication()
{
	return new SandboxApp();
}