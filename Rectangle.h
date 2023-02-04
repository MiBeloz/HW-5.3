#pragma once


#include "Parallelogram.h"


class Rectangle : public Parallelogram {
public:
	Rectangle(const int lengthAC, const int lengthBD) : Parallelogram(lengthAC, lengthBD, 90, 90) {}

	std::string getName() override { return "Прямоугольник"; }

	bool getCorrect() override {
		if (getLengthA() == getLengthC() && getLengthB() == getLengthD() && getAngleA() == 90 && getAngleB() == 90 && getAngleC() == 90 && getAngleD() == 90 && Quadrilateral::getCorrect()) {
			return true;
		}
		else {
			return false;
		}
	}
};

