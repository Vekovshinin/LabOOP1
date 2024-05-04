#pragma once 
#include "progression.h"
#include <iostream>
using namespace std;
Progression::Progression(double first = 1, double second = 1) {
	cout << "Вызов конструктора класса progression(" << first << ", " << second << ")\n";
	this->first = first;
	this->second = second;

};

double Progression::element(int j) {
	cout << "Вызов метода element(" << j << ")" << endl;
	return first * pow(second, j);
}

void Progression::setFirst(double a0) {
	cout << "Private поле first(а0) = " << a0 << endl;
	this->first = a0;
}

void Progression::setSecond(double r) {
	cout << "Private поле Second(r) = " << r << endl;
	this->second = r;
}