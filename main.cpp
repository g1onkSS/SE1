#include <iostream>

using namespace std;

int main() 
{
    //Объявление переменных для хранения чисел
    double num1, num2, difference;

    // Запрос ввода первого числа
    std::cout << "Введите первое число: ";
    std::cin >> num1;
    // Запрос ввода второго числа
    std::cout << "Введите второе число: ";
    std::cin >> num2;

    // Вычисление разности
    difference = num1 - num2;

    // Вывод результата
    std::cout << "Разность чисел " << num1 << " и " << num2 << " равна: " << difference << std::endl;

    return 0;
    
}

