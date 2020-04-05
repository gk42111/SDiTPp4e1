#include<iostream>
#include "Circle.h"
using namespace std;

int main()
{
	Circle C1(-1, 2, 3);
	Circle C2(4, 5, 6);
	Control C;
	LookIntoCircle CC;

	//cout << C.IntersectCheck(C1,C2) << endl;
	//cout << CC.GetRadius(C1)<<endl;
	cout << WhichQuarter(C1) << endl;
	system("pause");
	return 0;
}