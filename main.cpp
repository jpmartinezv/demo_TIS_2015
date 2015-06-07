#include <iostream>
#include "Box.hpp"

int main()
{
	std::cout << "Hello world" << std::endl;

	Box b1(30, 50);

	std::cout << "Width = " << b1.getWidth() << std::endl;
	std::cout << "Height = " << b1.getHeight() << std::endl;
	std::cout << "Area = " << b1.area() << std::endl;
	return 0;
}
