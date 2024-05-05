#include <iostream>
#include <cmath>

//*A program that calculates the average of 4 numbers*//

int main()
{
//*Program to repeat 4 times*//
int limit;
for (limit = 1; limit <= 4; limit++)
{
// input data*//
double w, x, y, z, sum, ave;

std::cout << "Attempt number: " << limit << std::endl;
// get the input from user*//
std::cout << "Enter the first number: ";
std::cin >> w;
std::cout << "\n";
std::cout << "Enter the second number: ";
std::cin >> x;
std::cout << "\n";
std::cout << "Enter the third number: ";
std::cin >> y;
std::cout << "\n";
std::cout << "Enter the fourth number: ";
std::cin >> z;
std::cout << "\n";

// process the input data*//
sum = w + x + y + z;
ave = sum / 4;

// display the output*//
std::cout << "The sum of the numbers is: " << sum << std::endl;
std::cout << "The average of the numbers is: " << ave << std::endl;
std::cout << "\n";
}
return 0;
}