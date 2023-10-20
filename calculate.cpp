#include <iostream>
#include "calculate.hpp"

// Variables
char op = ' ';
float a = 0.00f;
float b = 0.00f;


// Functions
void Intro()
{
    std::cout << "================================== CALCULATOR ==================================\n" << std::endl;
    std::cout << "Enter a symbol: [Add -> + ], [Subtract -> - ], [Multiply -> X ], [Divide -> / ]: ";
}

// Add
float Add(float x, float y)
{
    return x + y;
}

// Subtract
float Subtract(float x, float y)
{
    return x - y;
}

// Multiply
float Multiply(float x, float y)
{
    return x * y;
}

// Divide
float Divide(float x, float y)
{
    return x / y;
}

// Take in numbers
void InputNum()
{
    std::cout << "\nEnter First Number:  ";
    std::cin >> a;
    std::cout << "Enter Second Number: ";
    std::cin >> b;
}

void Operation()
{
    // Take input from the user
    std::cin >> op; 

    
    switch (op)
    {
    case '+':
        InputNum();
        std::cout << "\n\n" << a << " + " << b << " = " << Add(a, b) << std::endl;
        break;
    case '-':
        InputNum();
        std::cout << "\n\n" << a << " - " << b << " = " << Subtract(a, b) << std::endl;
        break;
    case '*':
        InputNum();
        std::cout << "\n\n" << a << " X " << b << " = " << Multiply(a, b) << std::endl; 
        break;
    case '/':
        InputNum();
        std::cout << "\n\n" << a << " / " << b << " = " << Divide(a, b) << std::endl; 
        break;
    default:
        std::cout << "ERROR: Wrong Input. Input must match options presented." << std::endl;
        break;
    }
}