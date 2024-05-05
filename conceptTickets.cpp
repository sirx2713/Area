#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    std::cout << "You can only buy 4 tickets!" << std::endl;
    
    int x;
    double totalDue, ticketCost, cashPaid, change;
    
    std::cout << "How many tickets: ";
    std::cin >> x;
    std::cout << "\n";
    
    if (x <= 4)
    {
        ticketCost = 35;
        totalDue = ticketCost * x;
        
        std::cout << "The total tickets: " << x << std::endl;
        std::cout << "Cost of 1 ticket: $" << ticketCost << std::endl;
        std::cout << "Total due: $" << totalDue << std::endl;
        std::cout << "Amount issued by customer: $";
        std::cin >> cashPaid;
        std::cout << "\n";
        
        change = cashPaid - totalDue;

        std::cout << "Change: $" << change << std::endl;
        std::cout << "\n";
    }
        if (x > 4)
        {
            std::cout << "Tickets exceed the limit, you can only buy 4 tickects!" << std::endl;
            std::cout << "\n";
        }
    return 0;
}