#include <iostream>
using namespace std;

int main() {

double fahrenheit;

cout << "Enter the temperature in Fahrenheit: ";
cin >> fahrenheit;
cout << "\n";

const double celsius = (fahrenheit - 32) / 1.8;

cout << "The temperature in Celsius is: " << celsius;

cout << "\n";

return 0;
}