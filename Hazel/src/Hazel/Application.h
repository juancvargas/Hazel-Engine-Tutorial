#pragma once

#include "Core.h"

/* 
1.) Put the Application class into the Hazel namespace. Everything will be in 
this namespace for macros they will be shorten to HZ naming.
2.) Declare a void Run () function.
3.) Make the destructor virtual because the class will be subclassed by the 
Sandbox application.
4.) Include the core.h file and add HAZEL_API macro after class keyword. 
5.) Declare Application* CreateApplication() function this will return an 
	Application object pointer that will be used in the Entry Point. This
	must be defind by the client. 
*/
namespace Hazel {
	class HAZEL_API Application {
	public: 
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined by the client application
	Application* CreateApplication();  
}


