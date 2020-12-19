#pragma once
/*
This file will define the Entry Point of the Hazel Engine.
The extern keyword specifies that Hazel::CreateApplication() has external 
linkage. In this cause it is defined by the client application
and declared in the Application.h file.
*/

#ifdef HZ_PLATFORM_WINDOWS

// Set the CreateApplication() function as extern to inform the compiler 
// that it is defined in another cpp file. In this case by the Client App.
extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char* argv[]) {
	// From: Logging video
	Hazel::Log::Init();
	HZ_CORE_WARN("Initialize Log!");
	int a = 7;
	HZ_INFO("Hello! var={0}", a);

	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
	return 0;
}
#endif