#include<stdio.h>
#include"Shape.h"
#include "Rectangle.h"
#include "Circle.h"
#include<iostream>

int main()
{
	Circle* circle = new Circle(3);
	Rectangle* rectangle = new Rectangle(6, 8);
	circle->size();
	circle->Draw();
	rectangle -> size();
	rectangle->Draw();

	delete circle;
	delete rectangle;

	return 0;
}