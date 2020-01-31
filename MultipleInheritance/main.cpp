#include <iostream>
#include "Shapes.hpp"

int main() {
	Cube cubeOne;
	std::cout << cubeOne << std::endl;

	Cube cubeTwo(1, 2, 3);
	std::cout << cubeTwo << std::endl;

	Cube cubeThree(cubeOne);
	std::cin >> cubeThree;
	std::cout << cubeThree << std::endl;

	return 0;
}
