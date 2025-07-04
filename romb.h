#pragma once
#include "quadrangle.h"

template <typename custom_type>
class Romb_class : public Quadrangle<custom_type>
{
private:
	custom_type angle = 30;
public:
	Romb_class(custom_type side1, custom_type side2, custom_type side3, custom_type side4)
	{
		this->side1 = side1;
		this->side2 = side2;
		this->side3 = side3;
		this->side4 = side4;
	}
	void set_sides() override;
	void set_angle();
	void P_calculate() override;
	void S_calculate() override;
	void show_angle();
};

template<typename custom_type>
inline void Romb_class<custom_type>::set_sides()
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
void Romb_class<custom_type>::set_angle()
{
	custom_type side_1 = Quadrangle<custom_type>::side1;
	custom_type side_2 = Quadrangle<custom_type>::side2;
	custom_type side_3 = Quadrangle<custom_type>::side3;
	custom_type side_4 = Quadrangle<custom_type>::side4;
	angle = 0;
	while (angle <= 0 || angle >= 180)
	{
		//ввод угла
		std::cout << "Введите угол: ";
		std::cin >> angle;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore();
			std::cout << "Вводите число.\n ";
		}
		else
		{
			if (side_1 <= 0) std::cout << "угол должен быть больше 0 и меньше 180." << "\n";
		}
		side_3 = side_1;
		side_2 = side_1;
		side_4 = side_1;
		Quadrangle<custom_type>::side4 = side_4;
		Quadrangle<custom_type>::side3 = side_3;
		Quadrangle<custom_type>::side2 = side_2;
	}
}

template<typename custom_type>
void Romb_class<custom_type>::P_calculate()
{
	custom_type side_1 = Quadrangle<custom_type>::side1;
	custom_type side_2 = Quadrangle<custom_type>::side2;
	custom_type side_3 = Quadrangle<custom_type>::side3;
	custom_type side_4 = Quadrangle<custom_type>::side4;
	custom_type P = 0;
	P = side_1 *4;
	std::cout << "Периметр ромба: " << P << "\n";
}

template<typename custom_type>
void Romb_class<custom_type>::S_calculate()
{
	custom_type side_1 = Quadrangle<custom_type>::side1;
	custom_type side_2 = Quadrangle<custom_type>::side2;
	custom_type side_3 = Quadrangle<custom_type>::side3;
	custom_type side_4 = Quadrangle<custom_type>::side4;
	custom_type S = 0;
	double angle_rad = angle * 3.1415 / 180.0;
	S = side_1 * side_1 * sin(angle_rad);
	std::cout << "Площадь ромба: " << S << "\n";
}

template<typename custom_type>
void Romb_class<custom_type>::show_angle()
{
	custom_type side_1 = Quadrangle<custom_type>::side1;
	custom_type side_2 = Quadrangle<custom_type>::side2;
	custom_type side_3 = Quadrangle<custom_type>::side3;
	custom_type side_4 = Quadrangle<custom_type>::side4;
	std::cout << "угол: " << angle << "\n";
}

