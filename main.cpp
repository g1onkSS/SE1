#include <iostream>

using namespace std;

int main() 
{
    //���������� ���������� ��� �������� �����
    double num1, num2, difference;

    // ������ ����� ������� �����
    std::cout << "������� ������ �����: ";
    std::cin >> num1;
    // ������ ����� ������� �����
    std::cout << "������� ������ �����: ";
    std::cin >> num2;

    // ���������� ��������
    difference = num1 - num2;

    // ����� ����������
    std::cout << "�������� ����� " << num1 << " � " << num2 << " �����: " << difference << std::endl;

    return 0;
    
}

