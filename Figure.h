#pragma once


#include <string>


class Figure {
public:
	Figure() : sides{} {}

	virtual std::string getName() { return "Фигура"; }

	int getSides() { return sides; }

	virtual std::string getAllLengths() { return "Стороны=0"; }

	virtual std::string getAllAngles() { return "Углы=0"; }

	virtual bool getCorrect() { 
		if (sides == 0) {
			return true;
		}
		else {
			return false;
		}
	}

	virtual std::string getInfo() {
		std::string correct;
		if (getCorrect()) {
			correct = "Правильная";
		}
		else {
			correct = "Неправильная";
		}
		return getName() + ":\n" + correct + "\nКоличество сторон: " + std::to_string(sides);
	}

protected:
	Figure(const int _sides) { sides = _sides; }

private:
	int sides;
};

