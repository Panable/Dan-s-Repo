/*
Written by Dhanveer Ramnauth
*/

#pragma once

double SquareFormula(double l)
{
	return l * l;
}

double RectangleFormula(double l, double h)
{
	return l * h;
}

double ParalellogramFormula(double b, double h) 
{
	return b * h;
}

double TrapezoidFormula(double b1, double b2, double h)
{
	return (h / 2) * (b1 + b2);
}

double CircleFormula(double r)
{
	return 3.14 * r * r;
}
