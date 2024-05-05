#include <iostream>

//A program that swaps numbers
int main()
{
    int x;
    int y;

    //Get first number from user
    std::cout << "Enter first number: ";
    std::cin >> x;
    std::cout << "\n";

    //Get second number from user
    std::cout << "Enter second number: ";
    std::cin >> y;
    std::cout << "\n";
    
    //Create a variable to help swap the two variables from user
    int temp = x;
    x = y;
    y = temp;

    //Displays the swapped variables from the user
    std::cout << "If first number is swapped to second number it will be: " << x << std::endl;
    std::cout << "If second number is swapped to first number it will be: " << y << std::endl;

    return 0;
}