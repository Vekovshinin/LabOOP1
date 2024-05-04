#include "progression.cpp"
#include <iostream>
using namespace std;


int main() {
	setlocale(LC_ALL, "Ru");
	Progression prog(1, 10);
	prog.setFirst(3);
	prog.setSecond(2);
	cout << "Значение функции = " << prog.element(3) << endl;
	return 0;
}
