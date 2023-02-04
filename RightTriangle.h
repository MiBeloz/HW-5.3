#pragma once


#include "Triangle.h"


class RightTriangle : public Triangle {
public:
	RightTriangle(const int lengthA, const int lengthB, const int lengthC, const int angleA, const int angleB) : Triangle(lengthA, lengthB, lengthC, angleA, angleB, 90) {}

	std::string getName() override { return "Прямоугольный треугольник"; }

	bool getCorrect() override {
		if (getAngleC() == 90 && Triangle::getCorrect()) {
			return true;
		}
		else {
			return false;
		}
	}
};

