#include "Box.hpp"

Box::Box(int width, int height)
{
	width_ = width;
	height_ = height;
}

void Box::setWidth(int width)
{
	width_ = width;
}

void Box::setHeight(int height)
{
	height_ = height;
}

int Box::getWidth()
{
	return width_;
}

int Box::getHeight()
{
	return height_;
}

int Box::area() const
{
	return width_ * height_;
}
