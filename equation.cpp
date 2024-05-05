#include <iostream>

int main() {

double z;
double x;
double y;

std::cout << "Enter the first number: ";
std::cin >> x;
std::cout << "\n";

std::cout << "Enter second number: ";
std::cin >> y;
std::cout << "\n";

z = (x + 10) / (3 * y);

std::cout << z << std::endl;

return 0;
}