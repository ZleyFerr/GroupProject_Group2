#pragma once
#include <iostream>
#include <vector>
#include <windows.h>
#include "quadrangle_methods.h"
#include "rectangle.h"
#include "square.h"
#include <ctime>
#include "trapez.h"
#include "romb.h"

int menu()
{
    srand(time(NULL));
    double a = rand() % 10 + 6;
    double b = rand() % 4 + 1;
    double c = rand() % 10 + 1;
    double d = rand() % 10 + 1;


    Quadrangle<double> quad(a, b, c, d);
    Rectangle_class <double> rect1(a, b, a, b);
    Square_class <double> square1(a, a, a, a);
    Trapez_class <double> trapez1(a, b, c, c);
    Romb_class <double> romb1(a, a, a, a);

    int choose = 0;
    int choose_1 = 0;
    int choose_2 = 0;
    int choose_3 = 0;
    int choose_4 = 0;
    int choose_5 = 0;
    char continueChoice;

    while (true)
    {
        choose = 0;
        //����� ������
        while (choose <= 0 || choose > 5)
        {
            system("cls");
            std::cout << "�������� ������: \n"
                << "1. ��������������\n"
                << "2. �������������\n"
                << "3. �������\n"
                << "4. ���������� ��������\n"
                << "5. ����\n"
                << "������� ����� �� 1 �� 5 (��� 0 ��� ������/����� ������ �� �������� ������): ";
            std::cin >> choose;
            if (std::cin.fail())
            {
                std::cin.clear();
                std::cin.ignore();
            }
            else
            {
                if (choose < 0 || choose > 5)
                    std::cout << "����� � ���� ���� �� 1 �� 5 (��� 0 ��� ������).\n";
            }

            if (choose == 0)
            {
                std::cout << "����� �� ���������.\n";
                return 0;
            }
        }

        switch (choose)
        {

            //������ 1
        case 1:
            choose_1 = 0;
            while (choose_1 <= 0 || choose_1 > 8)
            {
                system("cls");
                std::cout << "��������� ������ - ��������������.\n";
                std::cout << "�������� ��������: \n"
                    << "1. �������� ��� �������\n"
                    << "2. �������� ������� 1\n"
                    << "3. �������� ������� 2\n"
                    << "4. �������� ������� 3\n"
                    << "5. �������� ������� 4\n"
                    << "6. ������� ������� ������� �� �����\n"
                    << "7. ������� ��������\n"
                    << "8. ������� �������\n";
                std::cout << "������� ����� �� 1 �� 8: ";
                std::cin >> choose_1;
                if (std::cin.fail())
                {
                    std::cin.clear();
                    std::cin.ignore();
                    std::cout << "������� ���������� �����. \n";
                }
                else
                {
                    if (choose_1 <= 0 || choose_1 > 8) std::cout << "����� � ���� ���� �� 1 �� 8.\n";
                }

                switch (choose_1)
                {
                case 1:
                    std::cout << "������� ��������� ������.\n";
                    quad.set_sides();
                    break;
                case 2:
                    std::cout << "������� ��������� ������� 1.\n";
                    quad.set_side2();
                    break;
                case 3:
                    std::cout << "������� ��������� ������� 2.\n";
                    quad.set_side2();
                    break;
                case 4:
                    std::cout << "������� ��������� ������� 3.\n";
                    quad.set_side3();
                    break;
                case 5:
                    std::cout << "������� ��������� ������� 4.\n";
                    quad.set_side4();
                    break;
                case 6:
                    std::cout << "������ ����� ������� ������ �� �����.\n";
                    quad.show();
                    break;
                case 7:
                    std::cout << "������ ����� ���������.\n";
                    quad.P_calculate();
                    break;
                case 8:
                    std::cout << "������ ����� �������.\n";
                    quad.S_calculate();
                    break;
                default:
                    std::cout << "������������ ����.\n";
                    break;
                }

                std::cout << "��������� � ������ ������? (y - ��� �����������, ������ ����� ������ - ��� ������): ";
                std::cin >> continueChoice;

                if (continueChoice == 'y' || continueChoice == 'Y')
                    break;
                else
                {
                    std::cout << "����� �� ���������.";
                    return 0;
                }
            }
            break;
            //2 ������
        case 2:
            choose_2 = 0;
            while (choose_2 <= 0 || choose_2 > 7)
            {
                system("cls");
                std::cout << "��������� ������ - �������������.\n";
                std::cout << "�������� ��������: \n"
                    << "1. �������� ��� �������\n"
                    << "2. �������� ������\n"
                    << "3. �������� ������\n"
                    << "4. ������� ������� ������� �� �����\n"
                    << "5. ������� ��������\n"
                    << "6. ������� �������\n"
                    << "7. ������� ������ ��������� ����������\n";
                std::cout << "������� ����� �� 1 �� 7: ";
                std::cin >> choose_2;
                if (std::cin.fail())
                {
                    std::cin.clear();
                    std::cin.ignore();
                    std::cout << "������� ���������� �����. \n";
                }
                else
                {
                    if (choose_2 <= 0 || choose_2 > 7) std::cout << "����� � ���� ���� �� 1 �� 7.\n";
                }

                switch (choose_2)
                {
                case 1:
                    std::cout << "������� ��������� ������.\n";
                    rect1.set_sides();
                    break;
                case 2:
                    std::cout << "������� ��������� ������.\n";
                    rect1.set_side_1();
                    break;
                case 3:
                    std::cout << "������� ��������� ������.\n";
                    rect1.set_side_2();
                    break;
                case 4:
                    std::cout << "������ ����� ������� ������ �� �����.\n";
                    rect1.show();
                    break;
                case 5:
                    std::cout << "������ ����� ���������.\n";
                    rect1.P_calculate();
                    break;
                case 6:
                    std::cout << "������ ����� �������.\n";
                    rect1.S_calculate();
                    break;
                case 7:
                    std::cout << "������ ����� ��������� ����������.\n";
                    rect1.R_calculate();
                    break;
                default:
                    std::cout << "������������ ����.\n";
                    break;
                }

                std::cout << "��������� � ������ ������? (y - ��� �����������, ������ ����� ������ - ��� ������): ";
                std::cin >> continueChoice;

                if (continueChoice == 'y' || continueChoice == 'Y')
                    break;
                else
                {
                    std::cout << "����� �� ���������.";
                    return 0;
                }
            }
            break;
        case 3:
            choose_3 = 0;
            while (choose_3 <= 0 || choose_3 > 6)
            {
                system("cls");
                std::cout << "��������� ������ - �������.\n";
                std::cout << "�������� ��������: \n"
                    << "1. �������� �������\n"
                    << "2. ������� ������� ������� �� �����\n"
                    << "3. ������� ��������\n"
                    << "4. ������� �������\n"
                    << "5. ������� ������ ��������� ����������\n"
                    << "6. ������� ������ ��������� ����������\n";
                std::cout << "������� ����� �� 1 �� 7: ";
                std::cin >> choose_3;
                if (std::cin.fail())
                {
                    std::cin.clear();
                    std::cin.ignore();
                    std::cout << "������� ���������� �����. \n";
                }
                else
                {
                    if (choose_3 <= 0 || choose_3 > 6) std::cout << "����� � ���� ���� �� 1 �� 7.\n";
                }

                switch (choose_3)
                {
                case 1:
                    std::cout << "������� ��������� ������.\n";
                    square1.set_sides();
                    break;
                case 2:
                    std::cout << "������ ����� ������� ������ �� �����.\n";
                    square1.show();
                    break;
                case 3:
                    std::cout << "������ ����� ���������.\n";
                    square1.P_calculate();
                    break;
                case 4:
                    std::cout << "������ ����� �������.\n";
                    square1.S_calculate();
                    break;
                case 5:
                    std::cout << "������ ����� ��������� ����������.\n";
                    square1.R_calculate();
                    break;
                case 6:
                    std::cout << "������ ����� ��������� ����������.\n";
                    square1.R_v_calculate();
                    break;
                default:
                    std::cout << "������������ ����.\n";
                    break;
                }

                std::cout << "��������� � ������ ������? (y - ��� �����������, ������ ����� ������ - ��� ������): ";
                std::cin >> continueChoice;

                if (continueChoice == 'y' || continueChoice == 'Y')
                    break;
                else
                {
                    std::cout << "����� �� ���������.";
                    return 0;
                }
            }
            break;
        case 4:
            choose_4 = 0;
            while (choose_4 <= 0 || choose_4 > 8)
            {
                system("cls");
                std::cout << "��������� ������ - ����������� ��������.\n";
                std::cout << "�������� ��������: \n"
                    << "1. �������� �������\n"
                    << "2. �������� ������� ���������\n"
                    << "3. �������� ������� ���������\n"
                    << "4. �������� ������� �������\n"
                    << "5. ������� �������� �������\n"
                    << "6. ������� ��������\n"
                    << "7. ������� �������\n"
                    << "8. ������� ���� ��� ������� ���������.\n";
                std::cout << "������� ����� �� 1 �� 8: ";
                std::cin >> choose_4;
                if (std::cin.fail())
                {
                    std::cin.clear();
                    std::cin.ignore();
                    std::cout << "������� ���������� �����. \n";
                }
                else
                {
                    if (choose_4 <= 0 || choose_4 > 8) std::cout << "����� � ���� ���� �� 1 �� 8.\n";
                }

                switch (choose_4)
                {
                case 1:
                    std::cout << "������� ��������� ������.\n";
                    trapez1.set_sides();
                    break;
                case 2:
                    std::cout << "������� �������� �������� ���������.\n";
                    trapez1.set_side__1();
                    break;
                case 3:
                    std::cout << "������� �������� �������� ���������.\n";
                    trapez1.set_side__2();
                    break;
                case 4:
                    std::cout << "������� �������� ������� �������.\n";
                    trapez1.set_side__3();
                    break;
                case 5:
                    std::cout << "������ ����� ������� ������ �� �����.\n";
                    trapez1.show();
                    break;
                case 6:
                    std::cout << "������ ����� ���������.\n";
                    trapez1.P_calculate();
                    break;
                case 7:
                    std::cout << "������ ����� �������.\n";
                    trapez1.S_calculate();
                    break;
                case 8:
                    std::cout << "������ ����� ���� ��� ������� ���������\n";
                    trapez1.ugol_calculate();
                    break;
                default:
                    std::cout << "������������ ����.\n";
                    break;
                }

                std::cout << "��������� � ������ ������? (y - ��� �����������, ������ ����� ������ - ��� ������): ";
                std::cin >> continueChoice;

                if (continueChoice == 'y' || continueChoice == 'Y')
                    break;
                else
                {
                    std::cout << "����� �� ���������.";
                    return 0;
                }
            }
            break;
        case 5:
            choose_5 = 0;
            while (choose_5 <= 0 || choose_5 > 4)
            {
                system("cls");
                std::cout << "��������� ������ - ����.\n";
                std::cout << "�������� ��������: \n"
                    << "1. �������� �������\n"
                    << "2. ������� ������� ������� �� �����\n"
                    << "3. ������� ��������\n"
                    << "4. ������� �������\n";
                std::cout << "������� ����� �� 1 �� 4: ";
                std::cin >> choose_5;
                if (std::cin.fail())
                {
                    std::cin.clear();
                    std::cin.ignore();
                    std::cout << "������� ���������� �����. \n";
                }
                else
                {
                    if (choose_5 <= 0 || choose_5 > 4) std::cout << "����� � ���� ���� �� 1 �� 4.\n";
                }

                switch (choose_5)
                {
                case 1:
                    std::cout << "������� ��������� ������.\n";
                    romb1.set_sides();
                    break;
                case 2:
                    std::cout << "������ ����� ������� ������ �� �����.\n";
                    romb1.show();
                    break;
                case 3:
                    std::cout << "������ ����� ���������.\n";
                    romb1.P_calculate();
                    break;
                case 4:
                    std::cout << "������ ����� �������.\n";
                    romb1.S_calculate();
                    break;
                default:
                    std::cout << "������������ ����.\n";
                    break;
                }

                std::cout << "��������� � ������ ������? (y - ��� �����������, ������ ����� ������ - ��� ������): ";
                std::cin >> continueChoice;

                if (continueChoice == 'y' || continueChoice == 'Y')
                    break;
                else
                {
                    std::cout << "����� �� ���������.";
                    return 0;
                }
            }
            break;
        default:
            std::cout << "������������ ����.\n";
            break;
        }
    }

    return 0;
}