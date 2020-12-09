#pragma once

namespace Hazel {
	/*
	__declspec is a microsoft specific keyword, which specifies that an instance
	of a given type is to be stored with a Microsoft-specific storage-class 
	attribute in this case dllexport.
	*/
	__declspec(dllexport) void Print();
}