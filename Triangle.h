#pragma once


#include "Figure.h"


class Triangle : public Figure {
public:
	Triangle(const int lengthA, const int lengthB, const int lengthC, const int angleA, const int angleB, const int angleC) : Figure(3) {
		a = lengthA;
		b = lengthB;
		c = lengthC;
		A = angleA;
		B = angleB;
		C = angleC;
	}

	std::string getName() override { return "Треугольник"; }

	int getLengthA() { return a; }
	int getLengthB() { return b; }
	int getLengthC() { return c; }
	int getAngleA() { return A; }
	int getAngleB() { return B; }
	int getAngleC() { return C; }

	std::string getAllLengths() override {
		return "Стороны: a=" + std::to_string(a) + " b=" + std::to_string(b) + " c=" + std::to_string(c);
	}

	std::string getAllAngles() override {
		return "Угол: A=" + std::to_string(A) + " B=" + std::to_string(B) + " C=" + std::to_string(C);
	}

	bool getCorrect() override { 
		if (A + B + C == 180) {
			return true;
		}
		else {
			return false;
		}
	}

	std::string getInfo() override {
		std::string correct;
		if (getCorrect()) {
			correct = "Правильная";
		}
		else {
			correct = "Неправильная";
		}
		return getName() + ":\n" + correct + "\nКоличество сторон: " + std::to_string(getSides()) + "\n" + getAllLengths() + "\n" + getAllAngles();
	}

private:
	int a, b, c;
	int A, B, C;
};

