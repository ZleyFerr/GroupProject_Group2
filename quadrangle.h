#pragma once
template <class custom_type>
class Quadrangle
{
protected:
	custom_type side1 = 0;
	custom_type side2 = 0;
	custom_type side3 = 0;
	custom_type side4 = 0;
	custom_type P = 0;
	custom_type S = 0;

public:
	//������������ � ����������
	Quadrangle(custom_type side1, custom_type side2, custom_type side3, custom_type side4) : side1(side1), side2(side2), side3(side3), side4(side4) {};
	Quadrangle() {};
	~Quadrangle() {};

	//������� ��� ����������� ������ - ���������� ��� ������������
	virtual void set_sides(); 

	//������� ��� ��������� ������
	custom_type get_side1();
	custom_type get_side2();
	custom_type get_side3();
	custom_type get_side4();

	//������� ��� ������ ������ � �������.
	void show();
	void change_sides();

	//������� ��� �������� ��������� � ������� - ���������� ��� ������������
	virtual custom_type P_calculate();
	virtual custom_type S_calculate();
};