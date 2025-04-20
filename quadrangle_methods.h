#pragma once
#include "quadrangle.h"

template<typename Template>
void Quadrangle<Template>::set_sides()
{
	side1 = 0;
	side2 = 0;
	side3 = 0;
	side4 = 0;
	while (side1 <= 0 || side2 <= 0 || side3 <= 0 || side4 <= 0)
	{
		//ввод 1 стороны
		std::cout << "Введите 1 сторону: ";
		std::cin >> side1;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore();
			std::cout << "Вводите число.\n ";
		}
		else
		{
			if (side1 <= 0) std::cout << "Сторона 1 должна быть больше 0. введите 3 любых числа и продолжите" << "\n";
		}
		//ввод 2 стороны
		if(side1 > 0) std::cout << "Введите 2 сторону: ";
		std::cin >> side2;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore();
			std::cout << "Вводите число.\n ";
		}
		else
		{
			if (side2 <= 0) std::cout << "Сторона 2 должна быть больше 0. введите 2 любых числа и продолжите" << "\n";
		}
		//ввод 3 стороны
		if (side2 > 0 && side1 > 0) std::cout << "Введите 3 сторону: ";
		std::cin >> side3;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore();
			std::cout << "Вводите число.\n ";
		}
		else
		{
			if (side3 <= 0) std::cout << "Сторона 3 должна быть больше 0. введите 1 любое число и продолжите" << "\n";
		}
		//ввод 4 стороны
		if (side3 > 0 && side2 > 0 && side1 > 0) std::cout << "Введите 4 сторону: ";
		std::cin >> side4;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore();
			std::cout << "Вводите число.\n ";
		}
		else
		{
			if (side4 <= 0) std::cout << "Сторона 4 должна быть больше 0." << "\n";
		}
	}
}

template <typename Template>
Template Quadrangle<Template>::get_side1()
{
	return side1;
}

template<typename Template>
Template Quadrangle<Template>::get_side2()
{
	return side2;
}

template<typename Template>
Template Quadrangle<Template>::get_side3()
{
	return side3;
}

template<typename Template>
Template Quadrangle<Template>::get_side4()
{
	return side4;
}

template<typename custom_type>
 void Quadrangle<custom_type>::set_side1()
{
	 system("cls");
	 side1 = 0;
	 while (side1 <= 0)
	 {
		 //ввод 1 стороны
		 std::cout << "Введите 1 сторону: ";
		 std::cin >> side1;
		 if (std::cin.fail())
		 {
			 std::cin.clear();
			 std::cin.ignore();
			 std::cout << "Вводите число.\n ";
		 }
		 else
		 {
			 if (side1 <= 0) std::cout << "Сторона 1 должна быть больше 0. " << "\n";
		 }
	 }
}

 template<typename custom_type>
 void Quadrangle<custom_type>::set_side2()
 {
	 side2 = 0;
	 system("cls");
	 while (side2 <= 0)
	 {
		 //ввод 2 стороны
		 std::cout << "Введите 2 сторону: ";
		 std::cin >> side2;
		 if (std::cin.fail())
		 {
			 std::cin.clear();
			 std::cin.ignore();
			 std::cout << "Вводите число.\n ";
		 }
		 else
		 {
			 if (side2 <= 0) std::cout << "Сторона 2 должна быть больше 0. " << "\n";
		 }
	 }
 }

 template<typename custom_type>
 void Quadrangle<custom_type>::set_side3()
 {
	 side3 = 0;
	 system("cls");
	 while (side3 <= 0)
	 {
		 //ввод 3 стороны
		 std::cout << "Введите 3 сторону: ";
		 std::cin >> side3;
		 if (std::cin.fail())
		 {
			 std::cin.clear();
			 std::cin.ignore();
			 std::cout << "Вводите число.\n ";
		 }
		 else
		 {
			 if (side3 <= 0) std::cout << "Сторона 3 должна быть больше 0. " << "\n";
		 }
	 }
 }

 template<typename custom_type>
 void Quadrangle<custom_type>::set_side4()
 {
	 side4 = 0;
	 system("cls");
	 while (side4 <= 0)
	 {
		 //ввод 4 стороны
		 std::cout << "Введите 4 сторону: ";
		 std::cin >> side4;
		 if (std::cin.fail())
		 {
			 std::cin.clear();
			 std::cin.ignore();
			 std::cout << "Вводите число.\n ";
		 }
		 else
		 {
			 if (side4 <= 0) std::cout << "Сторона 4 должна быть больше 0. " << "\n";
		 }
	 }
 }

template<typename Template>
void Quadrangle<Template>::show()
{
	std::cout << "Сторона 1: " << side1 << "\n" << "Сторона 2: " << side2 << "\n" << "Сторона 3: " << side3 << "\n" << "Сторона 4: " << side4 << "\n";
}

template<typename custom_type>
void Quadrangle<custom_type>::change_sides()
{
	std::string operation_str = "J";
	while (int(operation_str[0]) < 48 || int(operation_str[0]) > 52 || operation_str.length() != 1)
	{
		std::cout << "Какую сторону вы хотите изменить? [0-4] ( 0 - не изменять ) : ";
		std::cin >> operation_str;
		if (int(operation_str[0]) < 48 || int(operation_str[0]) > 52 || operation_str.length() != 1) std::cout << "Введите корректное число.\n";
	}
	int operation;
	if (int(operation_str[0]) == 52) operation = 4;
	else if (int(operation_str[0]) == 51) operation = 3;
	else if (int(operation_str[0]) == 50) operation = 2;
	else if (int(operation_str[0]) == 49) operation = 1;
	else if (int(operation_str[0]) == 48) operation = 0;
	switch (operation)
	{
	case 0:
		std::cout << "Отмена изменения сторон.\n";
		break;
	case 1:
		do
		{
			std::cout << "Введите новую 1 сторону: ";
			std::cin >> side1;
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore();
				std::cout << "Вводите число.\n ";
			}
			else 
			{
				if (side1 <= 0) std::cout << "Сторона должна быть больше 0.\n";
			}
		} while (side1 <= 0);
		break;
	case 2:
		do
		{
			std::cout << "Введите новую 2 сторону: ";
			std::cin >> side2;
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore();
				std::cout << "Вводите число.\n ";
			}
			else
			{
				if (side2 <= 0) std::cout << "Сторона должна быть больше 0.\n";
			}
		} while (side2 <= 0);
		break;
	case 3:
		do
		{
			std::cout << "Введите новую 3 сторону: ";
			std::cin >> side3;
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore();
				std::cout << "Вводите число.\n ";
			}
			else
			{
				if (side3 <= 0) std::cout << "Сторона должна быть больше 0.\n";
			}
		} while (side3 <= 0);
		break;
	case 4:
		do
		{
			std::cout << "Введите новую 4 сторону: ";
			std::cin >> side4;
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore();
				std::cout << "Вводите число.\n ";
			}
			else
			{
				if (side4 <= 0) std::cout << "Сторона должна быть больше 0.\n";
			}
		} while (side4 <= 0);
		break;
	default:
		break;
	}
}

template<typename custom_type>
void Quadrangle<custom_type>::P_calculate()
{
	 std::cout << "Периметр четырёхугольника: " << side1+side2+side3+side4 << "\n";
}

template<typename custom_type>
void Quadrangle<custom_type>::S_calculate()
{
	 std::cout << "Площадь четырёхугольника: " << "Невозможно найти. Выберетие другую фигуру." << "\n";
}
