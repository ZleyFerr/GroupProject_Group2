#include <iostream>
#include <vector>
#include <windows.h>
#include "quadrangle_methods.h"
#include "quadrangle.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Ru");

	Quadrangle<double> deffault_test;
	deffault_test.set_sides();
	deffault_test.change_sides();
	deffault_test.show();
	deffault_test.S_calculate();
	deffault_test.P_calculate();
}
