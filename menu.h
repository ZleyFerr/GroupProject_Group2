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
        //Выбор фигуры
        while (choose <= 0 || choose > 5)
        {
            system("cls");
            std::cout << "Выберите фигуру: \n"
                << "1. Четырёхугольник\n"
                << "2. Прямоугольник\n"
                << "3. Квадрат\n"
                << "4. Равнобокая трапеция\n"
                << "5. Ромб\n"
                << "Введите число от 1 до 5 (или 0 для выхода/любой другой не циферный символ): ";
            std::cin >> choose;
            if (std::cin.fail())
            {
                std::cin.clear();
                std::cin.ignore();
            }
            else
            {
                if (choose < 0 || choose > 5)
                    std::cout << "Выбор в этом меню от 1 до 5 (или 0 для выхода).\n";
            }

            if (choose == 0)
            {
                std::cout << "Выход из программы.\n";
                return 0;
            }
        }

        switch (choose)
        {

            //фигура 1
        case 1:
            choose_1 = 0;
            while (choose_1 <= 0 || choose_1 > 8)
            {
                system("cls");
                std::cout << "Выбранная фигура - четырёхугольник.\n";
                std::cout << "Выберите действие: \n"
                    << "1. Изменить все стороны\n"
                    << "2. Изменить сторону 1\n"
                    << "3. Изменить сторону 2\n"
                    << "4. Изменить сторону 3\n"
                    << "5. Изменить сторону 4\n"
                    << "6. Вывести текущие стороны на экран\n"
                    << "7. Вывести периметр\n"
                    << "8. Вывести площадь\n";
                std::cout << "Введите число от 1 до 8: ";
                std::cin >> choose_1;
                if (std::cin.fail())
                {
                    std::cin.clear();
                    std::cin.ignore();
                    std::cout << "Вводите корректное число. \n";
                }
                else
                {
                    if (choose_1 <= 0 || choose_1 > 8) std::cout << "Выбор в этом меню от 1 до 8.\n";
                }

                switch (choose_1)
                {
                case 1:
                    std::cout << "Выбрано изменение сторон.\n";
                    quad.set_sides();
                    break;
                case 2:
                    std::cout << "Выбрано изменение стороны 1.\n";
                    quad.set_side2();
                    break;
                case 3:
                    std::cout << "Выбрано изменение стороны 2.\n";
                    quad.set_side2();
                    break;
                case 4:
                    std::cout << "Выбрано изменение стороны 3.\n";
                    quad.set_side3();
                    break;
                case 5:
                    std::cout << "Выбрано изменение стороны 4.\n";
                    quad.set_side4();
                    break;
                case 6:
                    std::cout << "Выбран вывод текущих сторон на экран.\n";
                    quad.show();
                    break;
                case 7:
                    std::cout << "Выбран вывод периметра.\n";
                    quad.P_calculate();
                    break;
                case 8:
                    std::cout << "Выбран вывод площади.\n";
                    quad.S_calculate();
                    break;
                default:
                    std::cout << "Неккоректный ввод.\n";
                    break;
                }

                std::cout << "Вернуться к выбору фигуры? (y - для продолжения, другой любой символ - для выхода): ";
                std::cin >> continueChoice;

                if (continueChoice == 'y' || continueChoice == 'Y')
                    break;
                else
                {
                    std::cout << "Выход из программы.";
                    return 0;
                }
            }
            break;
            //2 фигура
        case 2:
            choose_2 = 0;
            while (choose_2 <= 0 || choose_2 > 7)
            {
                system("cls");
                std::cout << "Выбранная фигура - прямоугольник.\n";
                std::cout << "Выберите действие: \n"
                    << "1. Изменить все стороны\n"
                    << "2. Изменить высоту\n"
                    << "3. Изменить ширину\n"
                    << "4. Вывести текущие стороны на экран\n"
                    << "5. Вывести периметр\n"
                    << "6. Вывести площадь\n"
                    << "7. Вывести радиус описанной окружности\n";
                std::cout << "Введите число от 1 до 7: ";
                std::cin >> choose_2;
                if (std::cin.fail())
                {
                    std::cin.clear();
                    std::cin.ignore();
                    std::cout << "Вводите корректное число. \n";
                }
                else
                {
                    if (choose_2 <= 0 || choose_2 > 7) std::cout << "Выбор в этом меню от 1 до 7.\n";
                }

                switch (choose_2)
                {
                case 1:
                    std::cout << "Выбрано изменение сторон.\n";
                    rect1.set_sides();
                    break;
                case 2:
                    std::cout << "Выбрано изменение ширины.\n";
                    rect1.set_side_1();
                    break;
                case 3:
                    std::cout << "Выбрано изменение высоты.\n";
                    rect1.set_side_2();
                    break;
                case 4:
                    std::cout << "Выбран вывод текущих сторон на экран.\n";
                    rect1.show();
                    break;
                case 5:
                    std::cout << "Выбран вывод периметра.\n";
                    rect1.P_calculate();
                    break;
                case 6:
                    std::cout << "Выбран вывод площади.\n";
                    rect1.S_calculate();
                    break;
                case 7:
                    std::cout << "Выбран вывод описанной окружности.\n";
                    rect1.R_calculate();
                    break;
                default:
                    std::cout << "Неккоректный ввод.\n";
                    break;
                }

                std::cout << "Вернуться к выбору фигуры? (y - для продолжения, другой любой символ - для выхода): ";
                std::cin >> continueChoice;

                if (continueChoice == 'y' || continueChoice == 'Y')
                    break;
                else
                {
                    std::cout << "Выход из программы.";
                    return 0;
                }
            }
            break;
        case 3:
            choose_3 = 0;
            while (choose_3 <= 0 || choose_3 > 6)
            {
                system("cls");
                std::cout << "Выбранная фигура - квадрат.\n";
                std::cout << "Выберите действие: \n"
                    << "1. Изменить сторону\n"
                    << "2. Вывести текущие стороны на экран\n"
                    << "3. Вывести периметр\n"
                    << "4. Вывести площадь\n"
                    << "5. Вывести радиус описанной окружности\n"
                    << "6. Вывести радиус вписанной окружности\n";
                std::cout << "Введите число от 1 до 7: ";
                std::cin >> choose_3;
                if (std::cin.fail())
                {
                    std::cin.clear();
                    std::cin.ignore();
                    std::cout << "Вводите корректное число. \n";
                }
                else
                {
                    if (choose_3 <= 0 || choose_3 > 6) std::cout << "Выбор в этом меню от 1 до 7.\n";
                }

                switch (choose_3)
                {
                case 1:
                    std::cout << "Выбрано изменение сторон.\n";
                    square1.set_sides();
                    break;
                case 2:
                    std::cout << "Выбран вывод текущих сторон на экран.\n";
                    square1.show();
                    break;
                case 3:
                    std::cout << "Выбран вывод периметра.\n";
                    square1.P_calculate();
                    break;
                case 4:
                    std::cout << "Выбран вывод площади.\n";
                    square1.S_calculate();
                    break;
                case 5:
                    std::cout << "Выбран вывод описанной окружности.\n";
                    square1.R_calculate();
                    break;
                case 6:
                    std::cout << "Выбран вывод вписанной окружности.\n";
                    square1.R_v_calculate();
                    break;
                default:
                    std::cout << "Неккоректный ввод.\n";
                    break;
                }

                std::cout << "Вернуться к выбору фигуры? (y - для продолжения, другой любой символ - для выхода): ";
                std::cin >> continueChoice;

                if (continueChoice == 'y' || continueChoice == 'Y')
                    break;
                else
                {
                    std::cout << "Выход из программы.";
                    return 0;
                }
            }
            break;
        case 4:
            choose_4 = 0;
            while (choose_4 <= 0 || choose_4 > 8)
            {
                system("cls");
                std::cout << "Выбранная фигура - равнобокоая трапеция.\n";
                std::cout << "Выберите действие: \n"
                    << "1. Изменить стороны\n"
                    << "2. Изменить большее основание\n"
                    << "3. Изменить меньшее основание\n"
                    << "4. Изменить боковую сторону\n"
                    << "5. Вывести текующие стороны\n"
                    << "6. Вывести периметр\n"
                    << "7. Вывести площадь\n"
                    << "8. Вывести угол при большем основании.\n";
                std::cout << "Введите число от 1 до 8: ";
                std::cin >> choose_4;
                if (std::cin.fail())
                {
                    std::cin.clear();
                    std::cin.ignore();
                    std::cout << "Вводите корректное число. \n";
                }
                else
                {
                    if (choose_4 <= 0 || choose_4 > 8) std::cout << "Выбор в этом меню от 1 до 8.\n";
                }

                switch (choose_4)
                {
                case 1:
                    std::cout << "Выбрано изменение сторон.\n";
                    trapez1.set_sides();
                    break;
                case 2:
                    std::cout << "Выбрано измнение большего основания.\n";
                    trapez1.set_side__1();
                    break;
                case 3:
                    std::cout << "Выбрано измнение меньшего основания.\n";
                    trapez1.set_side__2();
                    break;
                case 4:
                    std::cout << "Выбрано измнение боковой стороны.\n";
                    trapez1.set_side__3();
                    break;
                case 5:
                    std::cout << "Выбран вывод текущих сторон на экран.\n";
                    trapez1.show();
                    break;
                case 6:
                    std::cout << "Выбран вывод периметра.\n";
                    trapez1.P_calculate();
                    break;
                case 7:
                    std::cout << "Выбран вывод площади.\n";
                    trapez1.S_calculate();
                    break;
                case 8:
                    std::cout << "Выбран вывод угла при большем основании\n";
                    trapez1.ugol_calculate();
                    break;
                default:
                    std::cout << "Неккоректный ввод.\n";
                    break;
                }

                std::cout << "Вернуться к выбору фигуры? (y - для продолжения, другой любой символ - для выхода): ";
                std::cin >> continueChoice;

                if (continueChoice == 'y' || continueChoice == 'Y')
                    break;
                else
                {
                    std::cout << "Выход из программы.";
                    return 0;
                }
            }
            break;
        case 5:
            choose_5 = 0;
            while (choose_5 <= 0 || choose_5 > 4)
            {
                system("cls");
                std::cout << "Выбранная фигура - ромб.\n";
                std::cout << "Выберите действие: \n"
                    << "1. Изменить сторону\n"
                    << "2. Вывести текущие стороны на экран\n"
                    << "3. Вывести периметр\n"
                    << "4. Вывести площадь\n";
                std::cout << "Введите число от 1 до 4: ";
                std::cin >> choose_5;
                if (std::cin.fail())
                {
                    std::cin.clear();
                    std::cin.ignore();
                    std::cout << "Вводите корректное число. \n";
                }
                else
                {
                    if (choose_5 <= 0 || choose_5 > 4) std::cout << "Выбор в этом меню от 1 до 4.\n";
                }

                switch (choose_5)
                {
                case 1:
                    std::cout << "Выбрано изменение сторон.\n";
                    romb1.set_sides();
                    break;
                case 2:
                    std::cout << "Выбран вывод текущих сторон на экран.\n";
                    romb1.show();
                    break;
                case 3:
                    std::cout << "Выбран вывод периметра.\n";
                    romb1.P_calculate();
                    break;
                case 4:
                    std::cout << "Выбран вывод площади.\n";
                    romb1.S_calculate();
                    break;
                default:
                    std::cout << "Неккоректный ввод.\n";
                    break;
                }

                std::cout << "Вернуться к выбору фигуры? (y - для продолжения, другой любой символ - для выхода): ";
                std::cin >> continueChoice;

                if (continueChoice == 'y' || continueChoice == 'Y')
                    break;
                else
                {
                    std::cout << "Выход из программы.";
                    return 0;
                }
            }
            break;
        default:
            std::cout << "Неккоректный ввод.\n";
            break;
        }
    }

    return 0;
}
