#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double length, width, area, perimeter;
    
    std::cout << "Enter the length: ";
    std::cin >> length;
    std::cout << "\n";
    std::cout << "Enter the width: ";
    std::cin >> width;
    std::cout << "\n";
    
    area = length * width;
    perimeter = (2 * length) + (2 * width);
    
    std::cout << "The area of the rectangle: " << area << std::endl;
    std::cout << "The perimeter of the rectangle: " << perimeter << std::endl;
    
    return 0;
}