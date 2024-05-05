#include <iostream>
#include <cmath>

using namespace std;

int main()
{
int age;
double discountRate, sale, discount;

std::cout << "Enter the age of customer: ";
std::cin >> age;
std::cout << "\n";

if (age >= 55)
{
discountRate = 0.15;
std::cout << "Enter the price of item: $";
std::cin >> sale;
std::cout << "\n";

discount = sale  * discountRate;

std::cout << "Discount received:  $" << discount << std::endl;
std::cout << "Total due: $" << sale - discount << std::endl;
} else {
discountRate = 0.10;
std::cout << "Enter the price of item: $";
std::cin >> sale;
std::cout << "\n";

discount = sale  * discountRate;

std::cout << "Discount received:  $" << discount << std::endl;
std::cout << "Total due: $" << sale - discount << std::endl;
}
return 0;
}