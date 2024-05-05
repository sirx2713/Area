#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const double pi = 3.14159265359;
    double radius;
    double area;
    cout << "Enter the radius: ";
    cin >> radius;
    area = pi * pow(radius,2);
    
    cout << "The area of the circle: " << area;
    cout << "\n";
    
    return 0;
}