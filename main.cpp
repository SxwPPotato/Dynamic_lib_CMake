#include <iostream>
#include <string>
#include<Windows.h>
#include "Leaver.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::string name;
    std::cout << "Введите своё имя: ";
    std::cin >> name;
    Leaver leavings(name);
    leavings.leave();
    return 0;
}