#include "Circle.h"
#include <cmath>
Circle::Circle(double X, double Y,double R) :Centre(X, Y)
{
	Radius = R;
}

bool Control::IntersectCheck(Circle&C1, Circle& C2) // Definicja funkcji
{
	double CentresDistance;
	CentresDistance = sqrt(pow(C1.Centre.X- C2.Centre.X, 2) + pow(C1.Centre.Y -C2.Centre.Y, 2));
	return (CentresDistance<(C1.Radius + C2.Radius) && CentresDistance>abs(C1.Radius - C2.Radius));
}
double
LookIntoCircle::GetRadius(Circle& C)
{
	return C.Radius;
}

int WhichQuarter(Circle& C)
{
	if (C.Centre.X > 0 && C.Centre.Y > 0) return 1;
	if (C.Centre.X < 0 && C.Centre.Y > 0) return 2;
	if (C.Centre.X < 0 && C.Centre.Y < 0) return 3;
	if (C.Centre.X > 0 && C.Centre.Y < 0) return 4;
}
