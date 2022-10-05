#include <iostream>
#include "Date.h"
#include "Contact.h"

int main()
{
    Date birthDate{30,06,2000};
    std::pair<float, float> testLocation(1.0, 2.3);
    Contact mezelf {"Gielkens", "Maarten", "maartengielkens2000@gmail.com", birthDate, testLocation, Contact::Status::Roommates};


    std::cout << "Lastname: " << mezelf.lastName() << "\n";
    std::cout << "Firstname: " << mezelf.firstName() << "\n";
    std::cout << "Email: " << mezelf.email() << "\n";
    std::cout << "Birthday: " << mezelf.birthDate().day() << "/" << mezelf.birthDate().month() << "/" << mezelf.birthDate().year() << "\n";
    std::cout << "Location: " << mezelf.location().first << " - " << mezelf.location().second << "\n";
}