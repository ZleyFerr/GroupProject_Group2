#pragma once
#include "quadrangle.h"

template <typename custom_type>
class Square_class : public Quadrangle<custom_type>
{
public:
	~Square_class() override {};
	Square_class() {};
	Square_class(custom_type side1, custom_type side2, custom_type side3, custom_type side4)
	{
		this->side1 = side1;
		this->side2 = side2;
		this->side3 = side3;
		this->side4 = side4;
	}
	void set_sides() override;

	void P_calculate() override;
	void S_calculate() override;
	void R_calculate();
	void R_v_calculate();
};

template<typename custom_type>
inline void Square_class<custom_type>::set_sides()
{
	custom_type side_1 = Quadrangle<custom_type>::side1;
	custom_type side_2 = Quadrangle<custom_type>::side2;
	custom_type side_3 = Quadrangle<custom_type>::side3;
	custom_type side_4 = Quadrangle<custom_type>::side4;

	side_1 = 0;
	while (side_1 <= 0)
	{
		//ввод 1 стороны
		std::cout << "Введите сторону: ";
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
		side_3 = side_1;
		side_2 = side_1;
		side_4 = side_1;
		Quadrangle<custom_type>::side4 = side_4;
		Quadrangle<custom_type>::side3 = side_3;
		Quadrangle<custom_type>::side2 = side_2;
		Quadrangle<custom_type>::side1 = side_1;
	}
}

template<typename custom_type>
void Square_class<custom_type>::P_calculate()
{
	custom_type side_1 = Quadrangle<custom_type>::side1;
	custom_type side_2 = Quadrangle<custom_type>::side2;
	custom_type side_3 = Quadrangle<custom_type>::side3;
	custom_type side_4 = Quadrangle<custom_type>::side4;
	custom_type P = 0;
	P = side_1 + side_2 + side_3 + side_4;
	std::cout << "Периметр квадрата: " << P << "\n";
}

template<typename custom_type>
void Square_class<custom_type>::S_calculate()
{
	custom_type side_1 = Quadrangle<custom_type>::side1;
	custom_type side_2 = Quadrangle<custom_type>::side2;
	custom_type side_3 = Quadrangle<custom_type>::side3;
	custom_type side_4 = Quadrangle<custom_type>::side4;
	custom_type S = 0;
	S = side_1 * side_1;
	std::cout << "Площадь квадрата: " << S << "\n";
}

template<typename custom_type>
void Square_class<custom_type>::R_calculate()
{
	custom_type side_1 = Quadrangle<custom_type>::side1;
	custom_type side_2 = Quadrangle<custom_type>::side2;
	custom_type side_3 = Quadrangle<custom_type>::side3;
	custom_type side_4 = Quadrangle<custom_type>::side4;
	custom_type R = side_1/sqrt(2);
	std::cout << "Радиус описанной окружности квадрата: " << R << "\n";
}

template<typename custom_type>
void Square_class<custom_type>::R_v_calculate()
{
	custom_type side_1 = Quadrangle<custom_type>::side1;
	custom_type side_2 = Quadrangle<custom_type>::side2;
	custom_type side_3 = Quadrangle<custom_type>::side3;
	custom_type side_4 = Quadrangle<custom_type>::side4;
	custom_type R = side_1 /2;
	std::cout << "Радиус вписанной окружности квадрата: " << R << "\n";
}
