#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double payRate, hoursWorked, grossPay;
    string employeeName;
    
    std::cout << "Enter employee's names: ";
    std::cin >> employeeName;
    std::cout << "\n";
    std::cout << "Enter the pay rate: $";
    std::cin >> payRate;
    std::cout << "\n";
    std::cout << "Enter the total hours worked: ";
    std::cin >> hoursWorked;
    std::cout << "\n";
    
    grossPay = payRate * hoursWorked;
    
    std::cout << employeeName << "'s pay rate: $" << payRate << " per hour" << std::endl;
    std::cout << employeeName << " worked for: " << hoursWorked << " Hours" << std::endl;
    std::cout << employeeName << "'s gross pay: $" << grossPay << std::endl;
    
    return 0;
}