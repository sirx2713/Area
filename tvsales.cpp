#include <iostream>
#include <cmath>

using namespace std;

int main()
{
int x;
double priceTV, discount, totalDue;
double discountRate = 0.15;

for (x = 1; x <= 10; x++)
{
std::cout << "The Bill for customer: " << x << std::endl;
std::cout << "Enter the original price of the TV set: $";
std::cin >> priceTV;
std::cout << "\n";
std::cout << "The original cost of TV set: $" << priceTV << std::endl;

discount = priceTV * discountRate;
totalDue = priceTV - discount;

std::cout << "Discount received: $" << discount << std::endl;
std::cout << "Total amount due: $" << totalDue << std::endl;
std::cout << "\n";
}
return 0;
}