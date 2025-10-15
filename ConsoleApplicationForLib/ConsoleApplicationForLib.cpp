#include <iostream>
#include <cstring>
#include "StaticLibHeader.h"
#include "DynamicLibHeader.h"

int main(int argc, char** argv)
{
	std::string username{};
	
	GREETINGS::Greeter gr{};
	LEAVINGS::Leaver lv{};
	
	
	std::cout << "Enter name: ";
	std::cin >> username;

	std::cout << gr.greet(username);
	std::cout << std::endl;
	std::cout << lv.leave(username);
	
	return EXIT_SUCCESS;
}