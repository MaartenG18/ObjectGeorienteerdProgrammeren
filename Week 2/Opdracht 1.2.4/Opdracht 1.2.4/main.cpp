#include <iostream>
#include "Date.h"

int main()
{
    Date testDate{ "21/12/2015" };
    Date testDate2{ 26, 2, 2012 };
    Date testDate3{};

    std::cout << "Dag: " << testDate.day() << "\n";
    std::cout << "Maand: " << testDate.month() << "\n";
    std::cout << "Jaar: " << testDate.year() << "\n";

    std::cout << "Dag: " << testDate2.day() << "\n";
    std::cout << "Maand: " << testDate2.month() << "\n";
    std::cout << "Jaar: " << testDate2.year() << "\n";

    std::cout << "Dag: " << testDate3.day() << "\n";
    std::cout << "Maand: " << testDate3.month() << "\n";
    std::cout << "Jaar: " << testDate3.year() << "\n";
}