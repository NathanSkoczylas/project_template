#include <iostream>

#include "ClassObject.hpp"

// ----------------------------------------------------------------------------
// main
// ----------------------------------------------------------------------------
int main() {
	std::cout << "Project Template" << std::endl;
	
	std::cout << "Creating Object" << std::endl;
	EnterNameSpace::ClassObject thing;

	std::cout << "Object enabled: " << thing.enabled() << std::endl;
	thing.enabled(true);
	std::cout << "Object enabled: " << thing.enabled() << std::endl;
	
	std::cout << "Project Finished Running." << std::endl;
	return 0;
}

// Arg main
//int main(int argc, char* argv[]) {
//	return 0;
//}