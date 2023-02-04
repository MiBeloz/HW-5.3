#pragma once


#include "Figure.h"


class Quadrilateral : public Figure {
public:
	Quadrilateral(const int lengthA, const int lengthB, const int lengthC, const int lengthD, const int angleA, const int angleB, const int angleC, const int angleD) : Figure(4) {
		a = lengthA;
		b = lengthB;
		c = lengthC;
		d = lengthD;
		A = angleA;
		B = angleB;
		C = angleC;
		D = angleD;
	}

	std::string getName() override { return "Четырехугольник"; }

	int getLengthA() { return a; }
	int getLengthB() { return b; }
	int getLengthC() { return c; }
	int getLengthD() { return d; }
	int getAngleA() { return A; }
	int getAngleB() { return B; }
	int getAngleC() { return C; }
	int getAngleD() { return D; }

	std::string getAllLengths() override {
		return "Стороны: a=" + std::to_string(a) + " b=" + std::to_string(b) + " c=" + std::to_string(c) + " d=" + std::to_string(d);
	}

	std::string getAllAngles() override {
		return "Угол: A=" + std::to_string(A) + " B=" + std::to_string(B) + " C=" + std::to_string(C) + " D=" + std::to_string(D);
	}

	bool getCorrect() override {
		if (A + B + C + D == 360) {
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
	int a, b, c, d;
	int A, B, C, D;
};

