#include <iostream>
#include "Date.h"

int main()
{
    Date testDate{ "21/12/2015" };

    std::cout << "Dag: " << testDate.day() << "\n";
    std::cout << "Maand: " << testDate.month() << "\n";
    std::cout << "Jaar: " << testDate.year() << "\n";
}