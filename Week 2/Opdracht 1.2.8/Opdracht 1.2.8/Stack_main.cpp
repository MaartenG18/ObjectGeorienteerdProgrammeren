// Stack_main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Stack.h"

int main()
{
    Stack testStack{};
    Stack testStack2{ 5 };

    testStack2.push("test1");
    testStack2.push("test1");
    testStack2.push("test1");
    testStack2.push("test1");
}