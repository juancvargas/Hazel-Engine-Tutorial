#pragma once

/*
This file will contain Macros that are used by the rest of the Hazel engine.
*/

// The next lines of code will define a macro that will be either dllimport 
// of dllexport depending if the project is building a dll file. Note that this
// is for windows plateform only since __declspec is a windows only keyword.

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

// Create macros around the spdlog API to abstract it away from the user.
// The (...) syntax means we are using variadic macros. The __VA__ARGS__
// will forward the parameter list in the macro including the commas to
// the function.

// Core log macros
#define HZ_CORE_TRACE(...)  ::Hazel::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define HZ_CORE_INFO(...)   ::Hazel::Log::GetCoreLogger()->info(__VA_ARGS__)
#define HZ_CORE_WARN(...)   ::Hazel::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define HZ_CORE_ERROR(...)  ::Hazel::Log::GetCoreLogger()->error(__VA_ARGS__)
#define HZ_CORE_FATAL(...)  ::Hazel::Log::GetCoreLogger()->fatal(__VA_ARGS__)
							   
// Client log macros		   
#define HZ_TRACE(...)       ::Hazel::Log::GetClientLogger()->trace(__VA_ARGS__)
#define HZ_INFO(...)        ::Hazel::Log::GetClientLogger()->info(__VA_ARGS__)
#define HZ_WARN(...)        ::Hazel::Log::GetClientLogger()->warn(__VA_ARGS__)
#define HZ_ERROR(...)       ::Hazel::Log::GetClientLogger()->error(__VA_ARGS__)
#define HZ_FATAL(...)       ::Hazel::Log::GetClientLogger()->fatal(__VA_ARGS__)