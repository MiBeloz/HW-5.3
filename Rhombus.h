#pragma once


#include "Parallelogram.h"


class Rhombus : public Parallelogram {
public:
	Rhombus(const int lengthABCD, const int angleAC, const int angleBD) : Parallelogram(lengthABCD, lengthABCD, angleAC, angleBD) {}

	std::string getName() override { return "Ромб"; }

	bool getCorrect() override {
		if (getLengthA() == getLengthB() && getLengthB() == getLengthC() && getLengthC() == getLengthD() && getAngleA() == getAngleC() && getAngleB() == getAngleD() && Quadrilateral::getCorrect()) {
			return true;
		}
		else {
			return false;
		}
	}
};

