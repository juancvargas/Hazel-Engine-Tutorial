#pragma once

/*
This is wrapper around the spdlog API.
*/

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"


namespace Hazel {
	class HAZEL_API Log {
	public: 
		static void Init();

		// Since this methods are static they cannot access non-static members 
		// of this class. That is why s_CoreLogger and s_ClientLogger are 
		// static. The inline keyboard is just a hint to the linker that the
		// functions might be defined in different translation units. 
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() {
			return s_CoreLogger;
		}
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() {
			return s_ClientLogger;
		}
	private:
		// This members are used by static methods which means they have to 
		// also be declared with the static keyword
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

