#include <iostream>

using namespace std;

int main()
{
    int num1, num2;

    // ����������� ���� ������� �����
    std::cout << "������� ������ ����� �����: ";
    std::cin >> num1;

    // ����������� ���� ������� �����
    std::cout << "������� ������ ����� �����: ";
    std::cin >> num2;

    // ������� ��������� �����
    std::cout << "�� �����: " << num1 << " � " << num2 << std::endl;

    // ��������� �����
    int sum = num1 + num2;

    // ������� �����
    std::cout << "����� ��������� �����: " << sum << std::endl;

    return 0;
}
}
