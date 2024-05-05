#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int x, y;
    
    std::cout << "Enter 1 or 2 is the customer is an employee or just a regular client respectively: ";
    std::cin >> y;
    
    if (y == 1)
    {
        for (x = 1; x <= 10; x++)
        {
            double priceTV, discount, totalDue;
            double discountRate = 0.25;
            
            std::cout << "The Bill for employee: " << x << std::endl;
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
            }
            if (y == 2)
            {
                for (x = 1; x <= 10; x++)
                {
                    
                    double priceTV, discount, totalDue;
                    double discountRate = 0.15;
                    
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
                    } else {
                        std::cout << "Invalid request, try again" << std::endl;
                        }
                        return 0;
                        }