/*
We have the the following code for the Print function in this file only 
temporarily. Notice the _declspec(ddlimport) keyword infront of the 
print function declaration. 
*/

namespace Hazel {
	__declspec(dllimport) void Print();
}

int main() {
	Hazel::Print();
	return 0;
}