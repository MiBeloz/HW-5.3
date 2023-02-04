#include "main.h"


int main() {
	setlocale(LC_ALL, "ru");

	std::cout << "Фигуры. Методы\n\n" << std::endl;

	Figure* figure = new Figure();

	Figure* triangle = new Triangle(10, 20, 30, 50, 60, 70);
	Figure* rightTriangle1 = new RightTriangle(10, 20, 30, 50, 60);
	Figure* rightTriangle2 = new RightTriangle(10, 20, 30, 50, 40);
	Figure* isoscelesTriangle = new IsoscelesTriangle(10, 20, 50, 60);
	Figure* equilateralTriangle = new EquilateralTriangle(30);

	Figure* quadrilateral = new Quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
	Figure* rectangle = new Rectangle(10, 20);
	Figure* square = new Square(20);
	Figure* parallelogram = new Parallelogram(20, 30, 30, 40);
	Figure* rhombus = new Rhombus(30, 30, 40);

	printInfo(figure);

	printInfo(triangle);
	printInfo(rightTriangle1);
	printInfo(rightTriangle2);
	printInfo(isoscelesTriangle);
	printInfo(equilateralTriangle);

	printInfo(quadrilateral);
	printInfo(rectangle);
	printInfo(square);
	printInfo(parallelogram);
	printInfo(rhombus);

	deleteFigure(figure);

	deleteFigure(triangle);
	deleteFigure(rightTriangle1);
	deleteFigure(rightTriangle2);
	deleteFigure(isoscelesTriangle);
	deleteFigure(equilateralTriangle);

	deleteFigure(quadrilateral);
	deleteFigure(rectangle);
	deleteFigure(square);
	deleteFigure(parallelogram);
	deleteFigure(rhombus);

	system("pause > nul");

	return 0;
}

void printInfo(Figure* figure) {
	std::cout << figure->getInfo() << std::endl << std::endl;
}

void deleteFigure(Figure* figure) {
	delete figure;
	figure = nullptr;
}
