/*
From: Project setup video -> 
We have the the following code for the Print function in this file only 
temporarily. Notice the __declspec(ddlimport) keyword infront of the 
print function declaration. 

namespace Hazel {
	__declspec(dllimport) void Print();
}
*/
#include <Hazel.h>


// Subclass the Application class in the Hazel.h file
class Sandbox : public Hazel::Application {
public: 
	Sandbox() {

	}

	~Sandbox() {

	}
};

/* 
From: EntryPoint video->
This should be handle by the Hazel Engine. We heap allocate sandbox because
we want control of the memory usage of the entire application.

int main() {
	Sandbox* sandbox = new Sandbox();
	sandbox->Run();
	delete sandbox;
	return 0;
}
*/


// Important:
// We are defining the CreateApplication() function which will set the 
// Application object that will be used by the EntryPoint.h file.
Hazel::Application* Hazel::CreateApplication() {
	return new Sandbox();
}