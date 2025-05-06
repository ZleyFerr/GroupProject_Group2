#pragma once
#include <algorithm>

template <typename custom_type>
class Quadrangle
{
protected:
	custom_type side1 = 4;
	custom_type side2 = 2;
	custom_type side3 = 2;
	custom_type side4 = 2;
public:
	Quadrangle() {};
	 Quadrangle(custom_type side1, custom_type side2, custom_type side3, custom_type side4) : side1(side1), side2(side2), side3(side3), side4(side4) {}; //Конструктор c параметрамия 
	virtual ~Quadrangle() {}; //деструктор

	//Функция для становления сторон - изменяемая при наследовании
	virtual void set_sides(); 

	//Функции для получения сторон
	custom_type get_side1();
	custom_type get_side2();
	custom_type get_side3();
	custom_type get_side4();

	//Функции для становления отдельных сторон
	void set_side1();
	void set_side2();
	void set_side3();
	void set_side4();

	//Функция для вывода сторон в консоль.
	void show();
	void change_sides();

	//Функции для подсчёта перимитра и площади - изменяемые при наследовании
	virtual void P_calculate();
	virtual void S_calculate();

	//функция для проверки существования четырёхугольника
	bool check_quad();
};

