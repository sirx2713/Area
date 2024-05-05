#include <iostream>
#include <cmath>

using namespace std;

int main() {
double group;
std::cout  << "Enter 1 to play: ";
std::cin >> group;

 for (group = 1; group <= 10; group++)
 {
 	std::cout << "Enter the first number: ";
    std::cin >> group;
    std::cout << "Your first number: " << group << std::endl;

    std::cout << "Enter the second number: ";
    std::cin >> group;
    std::cout << "Your second number: " << group << std::endl;

    std::cout << "Enter the third number: ";
    std::cin >> group;
    std::cout << "Your third number number: " << group << std::endl;

    std::cout << "Enter the fourth number: ";
    std::cin >> group;
    std::cout << "Your fourth number: " << group << std::endl;

    std::cout << "Enter the fifth number: ";
    std::cin >> group;
    std::cout << "Your fifth number: " << group << std::endl;

    std::cout << "Enter the sixth number: ";
    std::cin >> group;
    std::cout << "Your sixth number: " << group << std::endl;

    std::cout << "Enter the seventh number: ";
    std::cin >> group;
    std::cout << "Your seventh number number: " << group << std::endl;

    std::cout << "Enter the eighth number: ";
    std::cin >> group;
    std::cout << "Your eighth number: " << group << std::endl;

    std::cout << "Enter the nineth number: ";
    std::cin >> group;
    std::cout << "You nineth number: " << group << std::endl;

    std::cout << "Enter the tenth number: ";
    std::cin >> group;
    std::cout << "You tenth number: " << group << std::endl;
 }
 if (group >= 11) {
    std::cout << "Program complete! " << std::endl;
 }

return 0;
}