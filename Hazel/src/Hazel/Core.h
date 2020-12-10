#pragma once

/*
This file will contain Macros that are used by the rest of the Hazel engine.
*/

// The next lines of code will define a macro that will be either dllimport 
// of dllexport depending on if we are building a dll file. Note that this
// is for windows plateforms only since __declspec is a windows only keyword.

#ifdef HZ_PLATFORM_WINDOWS
	// HZ_BUILD_DLL is defined for the Hazel but not the Sandbox project
	#ifdef HZ_BUILD_DLL
		#define HAZEL_API __declspec(dllexport)
	#else
		#define HAZEL_API __declspec(dllimport)
	#endif
#else
	#error Hazel only supports Windows!
#endif

