#ifndef Box_hpp
#define Box_hpp

class Box
{
public:
	Box(int width, int height);
	void setWidth(int width);
	void setHeight(int height);
	int getWidth();
	int getHeight();
	int area() const;
private:
	int width_;
	int height_;
};

#endif
