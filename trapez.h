#pragma once
#include "quadrangle.h"

template <typename custom_type>
class Trapez_class : public Quadrangle<custom_type>
{
public:
	~Trapez_class() override {};
	Trapez_class() {};
	Trapez_class(custom_type side1, custom_type side2, custom_type side3, custom_type side4)
	{
		this->side1 = side1;
		this->side2 = side2;
		this->side3 = side3;
		this->side4 = side4;
	}
	void set_sides() override;
	void set_side__1();
	void set_side__2();
	void set_side__3();
	void P_calculate() override;
	void S_calculate() override;
	void ugol_calculate();
};

template<typename custom_type>
inline void Trapez_class<custom_type>::set_sides()
{
	custom_type side_1 = Quadrangle<custom_type>::side1;
	custom_type side_2 = Quadrangle<custom_type>::side2;
	custom_type side_3 = Quadrangle<custom_type>::side3;
	custom_type side_4 = Quadrangle<custom_type>::side4;
	side_1 = 0;
	side_2 = 0;
	side_3 = 0;
	side_4 = 0;
	while (side_1 <= 0 || side_2 <= 0 || side_3 <= 0 || side_2 >= side_1)
	{
		std::cout << "Введите 1 сторону - большее основание : ";
		std::cin >> side_1;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore();
			std::cout << "Вводите число.\n ";
		}
		else
		{
			if (side_1 <= 0) std::cout << "Сторона 1 должна быть больше 0." << "\n";
		}

		if (side_1 > 0) std::cout << "Введите 2 сторону - меньшее основание: ";
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

		if (side_1 > 0 && side_2 > 0) std::cout << "Введите боковую сторону: ";
		std::cin >> side_3;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore();
			std::cout << "Вводите число.\n ";
		}
		else
		{
			if (side_3 <= 0) std::cout << "Боковая сторона должна быть больше 0." << "\n";
		}
		side_4 = side_3;
		Quadrangle<custom_type>::side4 = side_4;
		Quadrangle<custom_type>::side3 = side_3;
		Quadrangle<custom_type>::side2 = side_2;
		Quadrangle<custom_type>::side1 = side_1;
	}
}

template<typename custom_type>
void Trapez_class<custom_type>::P_calculate()
{
	custom_type side_1 = Quadrangle<custom_type>::side1;
	custom_type side_2 = Quadrangle<custom_type>::side2;
	custom_type side_3 = Quadrangle<custom_type>::side3;
	custom_type side_4 = Quadrangle<custom_type>::side4;
	custom_type P = 0;
	P = side_1 + side_2 + side_3 + side_4;
	std::cout << "Периметр равнобокой трапеции: " << P << "\n"; 
}

template<typename custom_type>
void Trapez_class<custom_type>::S_calculate()
{
	custom_type side_1 = Quadrangle<custom_type>::side1;
	custom_type side_2 = Quadrangle<custom_type>::side2;
	custom_type side_3 = Quadrangle<custom_type>::side3;
	custom_type side_4 = Quadrangle<custom_type>::side4;
	custom_type S = 0;
	custom_type h = 0;
	h = std::sqrt(std::pow(side_3, 2) - std::pow((side_2 - side_1) / 2, 2));
	S = ((side_1 + side_2) / 2) * h;
	std::cout << "Площадь равнобокой трапеции: " << S << "\n";
}

template<typename custom_type>
void Trapez_class<custom_type>::ugol_calculate()
{
	custom_type side_1 = Quadrangle<custom_type>::side1;
	custom_type side_2 = Quadrangle<custom_type>::side2;
	custom_type side_3 = Quadrangle<custom_type>::side3;
	custom_type side_4 = Quadrangle<custom_type>::side4;
	custom_type UR = std::acos((side_2 - side_1) / (2 * side_3));
	custom_type U = UR * 180.0 / 3.1415;
	std::cout << "Угол при основании равнобокой трапеции: " << U << "\n";
	if (U < 0) { std::cout << "такой равнобокой трапеции не сущесвует или угол слишком мал.\n"; }
}

template<typename custom_type>
inline void Trapez_class<custom_type>::set_side__1()
{
	custom_type side_1 = Quadrangle<custom_type>::side1;
	custom_type side_2 = Quadrangle<custom_type>::side2;
	custom_type side_3 = Quadrangle<custom_type>::side3;
	custom_type side_4 = Quadrangle<custom_type>::side4;
	side_1 = 0;

	system("cls");
	while (side_1 <= 0 || side_1 <= side_2)
	{
		//ввод 1 стороны
		std::cout << "Введите большее основание: ";
		std::cin >> side_1;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore();
			std::cout << "Вводите число.\n ";
		}
		else
		{
			if (side_1 <= 0) std::cout << "больше 0 и больше меньшего основания. " << "\n";
		}
	}
	Quadrangle<custom_type>::side4 = side_4;
	Quadrangle<custom_type>::side3 = side_3;
	Quadrangle<custom_type>::side2 = side_2;
	Quadrangle<custom_type>::side1 = side_1;
}

template<typename custom_type>
inline void Trapez_class<custom_type>::set_side__2()
{
	custom_type side_1 = Quadrangle<custom_type>::side1;
	custom_type side_2 = Quadrangle<custom_type>::side2;
	custom_type side_3 = Quadrangle<custom_type>::side3;
	custom_type side_4 = Quadrangle<custom_type>::side4;
	side_2 = 0;

	system("cls");
	while (side_2 <= 0)
	{
		//ввод 2 стороны
		std::cout << "Введите меньшее основание: ";
		std::cin >> side_2;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore();
			std::cout << "Вводите число.\n ";
		}
		else
		{
			if (side_1 <= 0) std::cout << "больше 0. " << "\n";
		}
	}
	Quadrangle<custom_type>::side4 = side_4;
	Quadrangle<custom_type>::side3 = side_3;
	Quadrangle<custom_type>::side2 = side_2;
	Quadrangle<custom_type>::side1 = side_1;
}

template<typename custom_type>
inline void Trapez_class<custom_type>::set_side__3()
{
	custom_type side_1 = Quadrangle<custom_type>::side1;
	custom_type side_2 = Quadrangle<custom_type>::side2;
	custom_type side_3 = Quadrangle<custom_type>::side3;
	custom_type side_4 = Quadrangle<custom_type>::side4;
	side_3 = 0;
	side_4 = 0;

	system("cls");
	while (side_3 <= 0)
	{
		//ввод 3-4 стороны
		std::cout << "Введите боковую сторону: ";
		std::cin >> side_3;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore();
			std::cout << "Вводите число.\n ";
		}
		else
		{
			if (side_3 <= 0) std::cout << "больше 0. " << "\n";
		}
	}
	side_4 = side_3;
	Quadrangle<custom_type>::side4 = side_4;
	Quadrangle<custom_type>::side3 = side_3;
	Quadrangle<custom_type>::side2 = side_2;
	Quadrangle<custom_type>::side1 = side_1;
}
