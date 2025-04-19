#pragma once
#include "quadrangle.h"

template<class Template>
void Quadrangle<Template>::set_sides()
{
	while (side1 <= 0 || side2 <= 0 || side3 <= 0 || side4 <= 0)
	{
		//���� 1 �������
		std::cout << "������� 1 �������: ";
		std::cin >> side1;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore();
			std::cout << "������� �����.\n ";
		}
		else
		{
			if (side1 <= 0) std::cout << "������� 1 ������ ���� ������ 0." << "\n";
		}
		//���� 2 �������
		if(side1 > 0) std::cout << "������� 2 �������: ";
		std::cin >> side2;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore();
			std::cout << "������� �����.\n ";
		}
		else
		{
			if (side2 <= 0) std::cout << "������� 2 ������ ���� ������ 0." << "\n";
		}
		//���� 3 �������
		if (side2 > 0 && side1 > 0) std::cout << "������� 3 �������: ";
		std::cin >> side3;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore();
			std::cout << "������� �����.\n ";
		}
		else
		{
			if (side3 <= 0) std::cout << "������� 3 ������ ���� ������ 0." << "\n";
		}
		//���� 4 �������
		if (side3 > 0 && side2 > 0 && side1 > 0) std::cout << "������� 4 �������: ";
		std::cin >> side4;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore();
			std::cout << "������� �����.\n ";
		}
		else
		{
			if (side4 <= 0) std::cout << "������� 4 ������ ���� ������ 0." << "\n";
		}
	}
}

template<class Template>
Template Quadrangle<Template>::get_side1()
{
	return side1;
}

template<class Template>
Template Quadrangle<Template>::get_side2()
{
	return side2;
}

template<class Template>
Template Quadrangle<Template>::get_side3()
{
	return side3;
}

template<class Template>
Template Quadrangle<Template>::get_side4()
{
	return side4;
}

template<class Template>
void Quadrangle<Template>::show()
{
	std::cout << "������� 1: " << side1 << "\n" << "������� 2: " << side2 << "\n" << "������� 3: " << side3 << "\n" << "������� 4: " << side4 << "\n";
}

template<class custom_type>
void Quadrangle<custom_type>::change_sides()
{
	std::string operation_str = "J";
	while (int(operation_str[0]) < 48 || int(operation_str[0]) > 52 || operation_str.length() != 1)
	{
		std::cout << "����� ������� �� ������ ��������? [0-4] ( 0 - �� �������� ) : ";
		std::cin >> operation_str;
		if (int(operation_str[0]) < 48 || int(operation_str[0]) > 52 || operation_str.length() != 1) std::cout << "������� ���������� �����.\n";
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
		std::cout << "������ ��������� ������.\n";
		break;
	case 1:
		do
		{
			std::cout << "������� ����� 1 �������: ";
			std::cin >> side1;
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore();
				std::cout << "������� �����.\n ";
			}
			else 
			{
				if (side1 <= 0) std::cout << "������� ������ ���� ������ 0.\n";
			}
		} while (side1 <= 0);
		break;
	case 2:
		do
		{
			std::cout << "������� ����� 2 �������: ";
			std::cin >> side2;
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore();
				std::cout << "������� �����.\n ";
			}
			else
			{
				if (side2 <= 0) std::cout << "������� ������ ���� ������ 0.\n";
			}
		} while (side2 <= 0);
		break;
	case 3:
		do
		{
			std::cout << "������� ����� 3 �������: ";
			std::cin >> side3;
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore();
				std::cout << "������� �����.\n ";
			}
			else
			{
				if (side3 <= 0) std::cout << "������� ������ ���� ������ 0.\n";
			}
		} while (side3 <= 0);
		break;
	case 4:
		do
		{
			std::cout << "������� ����� 4 �������: ";
			std::cin >> side4;
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore();
				std::cout << "������� �����.\n ";
			}
			else
			{
				if (side4 <= 0) std::cout << "������� ������ ���� ������ 0.\n";
			}
		} while (side4 <= 0);
		break;
	default:
		break;
	}
}

template<class custom_type>
 custom_type Quadrangle<custom_type>::P_calculate()
{
	 std::cout << "P �������[�� ���������]: " << P << "\n";
	 return P;
}

template<class custom_type>
 custom_type Quadrangle<custom_type>::S_calculate()
{
	 std::cout << "S �������[�� ���������]: " << S << "\n";
	 return S;
}
