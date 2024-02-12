#pragma once
#include"Shape.h"
class Circle : public IShape
{
public:
	void size() override;
	void Draw() override;

	Circle(float i);
private:
	float num;
};

