#pragma once


#include "Rhombus.h"


class Square : public Rhombus {
public:
	Square(const int lengthABCD) : Rhombus(lengthABCD, 90, 90) {}

	std::string getName() override { return "Квадрат"; }

	bool getCorrect() override {
		if (getLengthA() == getLengthB() && getLengthB() == getLengthC() && getLengthC() == getLengthD() && getAngleA() == 90 && getAngleB() == 90 && getAngleC() == 90 && getAngleD() == 90 && Quadrilateral::getCorrect()) {
			return true;
		}
		else {
			return false;
		}
	}
};

