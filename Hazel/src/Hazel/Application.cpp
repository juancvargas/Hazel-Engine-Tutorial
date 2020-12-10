#include "Application.h"

/*
1.) Put this specifications into the Hazel namespace. 
2.) Define the default constructor and the destructor.
2.) Add the void Run () function which will include a run loop.
4.) Add Application* CreateApplication() 

*/
namespace Hazel {
	Application::Application() {

	}

	Application::~Application() {

	}

	void Application::Run() {
		// This loop prevents the application from closing.
		while (true);
	}

}