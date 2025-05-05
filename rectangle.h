#pragma once
#include "quadrangle.h"

template <typename custom_type>
class Rectangle_class : public Quadrangle<custom_type>
{
public:
	~Rectangle_class() override {};
	Rectangle_class() {};
	Rectangle_class(custom_type side1, custom_type side2, custom_type side3, custom_type side4)
	{
		this->side1 = side1;
		this->side2 = side2;
		this->side3 = side3;
		this->side4 = side4;
	}

	void set_sides() override;

	void set_side_1();
	void set_side_2();
	void P_calculate() override;
	void S_calculate() override;
	void R_calculate();
};

template<typename custom_type>
inline void Rectangle_class<custom_type>::set_sides()
{
	custom_type side_1 = Quadrangle<custom_type>::side1;
	custom_type side_2 = Quadrangle<custom_type>::side2;
	custom_type side_3 = Quadrangle<custom_type>::side3;
	custom_type side_4 = Quadrangle<custom_type>::side4;
	side_1 = 0;
	side_2 = 0;
	side_3 = 0;
	side_4 = 0;
	system("cls");
	while (side_1 <= 0 || side_2 <= 0)
	{
		std::cout << "Введите высоту: ";
		std::cin >> side_1;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore();
			std::cout << "Вводите число.\n ";
		}
		else
		{
			if (side_1 <= 0) std::cout << "Сторона 1 должна быть больше 0. введите любое число и продолжите" << "\n";
		}

		if (side_1 > 0) std::cout << "Введите ширину: ";
		std::cin >> side_2;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore();
			std::cout << "Вводите число.\n ";
		}
		else
		{
			if (side_2 <= 0) std::cout << "Сторона 2 должна быть больше 0." << "\n";
		}

		side_3 = side_1;
		side_4 = side_2;
	}

	Quadrangle<custom_type>::side4 = side_4;
	Quadrangle<custom_type>::side3 = side_3;
	Quadrangle<custom_type>::side2 = side_2;
	Quadrangle<custom_type>::side1 = side_1;
}
template<typename custom_type>
inline void Rectangle_class<custom_type>::set_side_1()
{
	custom_type side_1 = Quadrangle<custom_type>::side1;
	custom_type side_2 = Quadrangle<custom_type>::side2;
	custom_type side_3 = Quadrangle<custom_type>::side3;
	custom_type side_4 = Quadrangle<custom_type>::side4;
	side_1 = 0;
	side_3 = 0;

	system("cls");
	while (side_1 <= 0)
	{
		//ввод 1 стороны
		std::cout << "Введите высоту: ";
		std::cin >> side_1;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore();
			std::cout << "Вводите число.\n ";
		}
		else
		{
			if (side_1 <= 0) std::cout << "Высота должна быть больше 0. " << "\n";
		}
	}
	side_3 = side_1;
	Quadrangle<custom_type>::side4 = side_4;
	Quadrangle<custom_type>::side3 = side_3;
	Quadrangle<custom_type>::side2 = side_2;
	Quadrangle<custom_type>::side1 = side_1;
}

template<typename custom_type>
inline void Rectangle_class<custom_type>::set_side_2()
{
	custom_type side_1 = Quadrangle<custom_type>::side1;
	custom_type side_2 = Quadrangle<custom_type>::side2;
	custom_type side_3 = Quadrangle<custom_type>::side3;
	custom_type side_4 = Quadrangle<custom_type>::side4;
	side_2 = 0;
	side_4 = 0;

	system("cls");
	while (side_2 <= 0)
	{
		//ввод 2 стороны
		std::cout << "Введите ширину: ";
		std::cin >> side_2;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore();
			std::cout << "Вводите число.\n ";
		}
		else
		{
			if (side_1 <= 0) std::cout << "ширина должна быть больше 0. " << "\n";
		}
	}
	side_4 = side_2;
	Quadrangle<custom_type>::side4 = side_4;
	Quadrangle<custom_type>::side3 = side_3;
	Quadrangle<custom_type>::side2 = side_2;
	Quadrangle<custom_type>::side1 = side_1;
}

template<typename custom_type>
void Rectangle_class<custom_type>::P_calculate()
{
	custom_type side_1 = Quadrangle<custom_type>::side1;
	custom_type side_2 = Quadrangle<custom_type>::side2;
	custom_type side_3 = Quadrangle<custom_type>::side3;
	custom_type side_4 = Quadrangle<custom_type>::side4;
	custom_type P = 0;
	P = side_1 + side_2 + side_3 + side_4;
	std::cout << "Периметр прямоугольника: " << P << "\n";
}

template<typename custom_type>
void Rectangle_class<custom_type>::S_calculate()
{
	 custom_type side_1 = Quadrangle<custom_type>::side1;
	 custom_type side_2 = Quadrangle<custom_type>::side2;
	 custom_type side_3 = Quadrangle<custom_type>::side3;
	 custom_type side_4 = Quadrangle<custom_type>::side4;
	 custom_type S = 0;
	 S = side_1 * side_3;
	 std::cout << "Площадь равнобокой трапеции: " << S << "\n";
}

template<typename custom_type>
void Rectangle_class<custom_type>::R_calculate()
{
	custom_type side_1 = Quadrangle<custom_type>::side1;
	custom_type side_2 = Quadrangle<custom_type>::side2;
	custom_type side_3 = Quadrangle<custom_type>::side3;
	custom_type side_4 = Quadrangle<custom_type>::side4;
	custom_type R = sqrt(side_1*side_1 + side_2*side_2)/2;
	std::cout << "Радиус описанной окружности прямоугольника: " << R << "\n";
}
