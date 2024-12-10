#include <iostream>

using namespace std;

int main()
{
    int num1, num2;

    // Запрашиваем ввод первого числа
    std::cout << "Введите первое целое число: ";
    std::cin >> num1;

    // Запрашиваем ввод второго числа
    std::cout << "Введите второе целое число: ";
    std::cin >> num2;

    // Выводим введенные числа
    std::cout << "Вы ввели: " << num1 << " и " << num2 << std::endl;

    // Вычисляем сумму
    int sum = num1 + num2;

    // Выводим сумму
    std::cout << "Сумма введенных чисел: " << sum << std::endl;

    return 0;
}
}
