#pragma once


#include "IsoscelesTriangle.h"


class EquilateralTriangle : public IsoscelesTriangle {
public:
	EquilateralTriangle(const int lengthABC) : IsoscelesTriangle(lengthABC, lengthABC, 60, 60) {}

	std::string getName() override { return "Равносторонний треугольник"; }

	bool getCorrect() override {
		if (getLengthA() == getLengthB() && getLengthB() == getLengthC() && getAngleA() == 60 && getAngleB() == 60 && getAngleC() == 60 && Triangle::getCorrect()) {
			return true;
		}
		else {
			return false;
		}
	}
};

