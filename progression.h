#pragma once
#include <iostream>

using namespace std;

class Progression {
private:
	double first, second;
	double pow(double x, double y) {
		cout << "Вызов элемента pow(" << x << ", " << y << ")" << endl;
		double result = 1;
		for (int i = 1; i <= y; i++) {
			result *= x;
		}
		return result;
	}
public:
	Progression(double, double);
	double element(int);
	void setFirst(double);
	void setSecond(double);
};
