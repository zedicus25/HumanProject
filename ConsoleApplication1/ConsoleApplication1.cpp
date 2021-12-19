#include <iostream>
#include "c_SchoolBoy.h"
#include "c_Student.h"
#include "c_Worker.h"
int main()
{
    c_SchoolBoy schoolboy;
    c_Student student;
    c_Worker worker;

    std::cin >> schoolboy;
    system("cls");
    std::cin >> student;
    system("cls");
    std::cin >> worker;
    system("cls");
    std::cout << schoolboy << "\n";
    std::cout << student << "\n";
    std::cout << worker << "\n";
}