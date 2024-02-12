#pragma once
#include"Shape.h"
class Rectangle : public IShape
{
public:
	void size() override;
	void Draw() override;

	Rectangle(int num1, int num2);

private:
	int width;
	int height;
	int area;
};

