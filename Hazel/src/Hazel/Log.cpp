#include "Log.h"

namespace Hazel {
	// We have to define the static Logger member objects from the Log class.
	// Since they are declared static they will be intialize to 
	// some default value.
	std::shared_ptr<spdlog::logger> Log::s_CoreLogger;
	std::shared_ptr<spdlog::logger> Log::s_ClientLogger;

	// This method will initialize the logging objects for the Hazel Engine
	void Log::Init() {
		// set the logging pattern for the logging messages
		spdlog::set_pattern("%^[%T] %n: %v%$");

		// Create stdout logger objects for the Core and Client appilcations
		// and set its level
		s_CoreLogger = spdlog::stdout_color_mt("HAZEL");
		s_CoreLogger->set_level(spdlog::level::trace);

		s_ClientLogger = spdlog::stdout_color_mt("APP");
		s_ClientLogger->set_level(spdlog::level::trace);
	}
}
