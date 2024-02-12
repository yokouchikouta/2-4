#include "Circle.h"
#include <stdio.h>

Circle::Circle(float i) {
	num = i;
}

void Circle::size() {
	num *= 3.14;
}

void Circle::Draw() {
	printf("‰~ : %f\n", num);
}