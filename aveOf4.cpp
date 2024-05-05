#include <iostream>
#include <cmath>

using namespace std;

int main()
{
int x;
double r, s, t, u, sum, ave;

for (x = 1; x <= 4; x++)
{
    std::cout << "Attempt number: " << x << std::endl;
    std::cout << "Enter first number: ";
    std::cin >> r;
    std::cout << "\n";
    std::cout << "Enter second number: ";
    std::cin >> s;
    std::cout << "\n";
    std::cout << "Enter third number: ";
    std::cin >> t;
    std::cout << "\n";
    std::cout << "Enter fourth number: ";
    std::cin >> u;
    std::cout << "\n";
    
    sum = r + s + t + u;
    ave = sum / 4;
    
    std::cout << "The sum of the numbers is: " << sum << std::endl;
    std::cout << "The average of the numbers is: " << ave << std::endl;
    std::cout << "\n";
    }
    return 0;
}