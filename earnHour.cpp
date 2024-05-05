#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string employeeName;
    double hoursWorked, payRate, overtimeHours, overtimePay, grossPay, regularPay;
    int workersLimit;
    
    for (workersLimit = 1; workersLimit <= 5; workersLimit++)
    {
        std::cout << "Enter the employee's name: ";
        std::cin >> employeeName;
        std::cout << "\n";
        std::cout << "Enter the hours worked: ";
        std::cin >> hoursWorked;
        
        if (hoursWorked >= 40)
        {
            std::cout << "Enter pay rate: ";
            std::cin >> payRate;
            std::cout << "\n";
            
            regularPay = payRate * 40; 

            std::cout << "Employee Number: " << workersLimit << std::endl;
            std::cout << "Employee: " << employeeName << std::endl;
            std::cout <<"Regular pay: $" << regularPay << std::endl;
            
            overtimeHours = hoursWorked - 40;
            overtimePay = (0.5 * payRate) * overtimeHours;
            grossPay = regularPay + overtimePay;
            
            std::cout << "Overtime hours: " << overtimeHours << " hours" << std::endl;
            std::cout << "Overtime pay: $" << overtimePay << std::endl;
            std::cout << "Gross pay: $" << grossPay << std::endl;
            std::cout << "\n";
            }
            if (hoursWorked <= 39)
            {
                std::cout << "Enter pay rate: ";
                std::cin >> payRate;
                std::cout << "\n";
                
                regularPay = payRate * hoursWorked;

                std::cout << "Employee Number: " << workersLimit << std::endl;
                std::cout << "Employee: " << employeeName << std::endl;
                std::cout <<"Regular pay: $" << regularPay << std::endl;
                std::cout << "Overtime hours:  0 hours" << std::endl;
                std::cout << "Overtime pay: $0.00" << std::endl;
                std::cout << "Gross pay: $" << regularPay << std::endl;
                std::cout << "\n";
            }

}
return 0;
}