/*
Written by Dhanveer Ramnauth
*/

#pragma once
#define print std::cout
#define endprint std::endl
#define input std::cin
#include "Formula.h"
#include <iostream>


void Square()
{
	double l;

	print << "Please enter the side length: " << endprint;
	input >> l;
	print << "The area of the square is: " << SquareFormula(l) << endprint;

}

void Rectangle()
{
	double l, h;

	print << "Please enter the length: " << endprint;
	input >> l;
	print << "Please enter the height " << endprint;
	input >> h;

	print << "The area of the rectangle is: " << RectangleFormula(l, h) << endprint;

}

void Paralellogram()
{
	double b, h;

	print << "Please enter the base length: " << endprint;
	input >> b;
	print << "Please enter the height: " << endprint;
	input >> h;

	print << "The area of the parallelogram is: " << ParalellogramFormula(b, h) << endprint;
}

void Trapezoid()
{
	double b1, b2, h;

	print << "Please enter the first base length: " << endprint;
	input >> b1;
	print << "Please enter the second base length: " << endprint;
	input >> b2;
	print << "Please enter the height: " << endprint;
	input >> h;

	print << "The area of the trapezium is " << TrapezoidFormula(b1, b2, h) << endprint;
}

void Circle()
{
	double r;

	print << "Please enter in the radius: " << endprint;
	input >> r;

	print << "The area of the circle is: " << CircleFormula(r) << endprint;
}