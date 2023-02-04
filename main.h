#pragma once


#include "Figure.h"
#include "Triangle.h"
#include "Quadrilateral.h"
#include "Parallelogram.h"
#include "Rectangle.h"
#include "Rhombus.h"
#include "Square.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"

#include <iostream>


void printInfo(Figure* figure);

void deleteFigure(Figure* figure);