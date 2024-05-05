#include <iostream>
#include <cmath>

using namespace std;

int main() {

int totalPersons;

for (totalPersons = 1; totalPersons <= 10; totalPersons++)
{
string salesPerson;
double sales, bonus1, bonus2;

std::cout << "Enter the salesperson's name: ";
std::cin >> salesPerson;
std::cout << "\n";

std::cout << "Enter the sales made: $";
std::cin >> sales;
std::cout << "\n";

if (sales >= 10000)
{
bonus1 = 0.1 * sales;
std::cout << "Salesperson number: " << totalPersons << std::endl;
std::cout << "Salesperson: " << salesPerson << std::endl;
std::cout << "Total sales made: $" << sales << std::endl;
std::cout << "Bonus received: $" << bonus1 << std::endl;
double payCheck;
payCheck = bonus1 + sales;
std::cout << salesPerson << "'s paycheck: $" << payCheck << std::endl;
std::cout << "\n";
}
else {
bonus2 = 0.05 * sales;
std::cout << "Salesperson number: " << totalPersons << std::endl;
std::cout << "Salesperson: " << salesPerson << std::endl;
std::cout << "Total sales made: $" << sales << std::endl;
std::cout << "Bonus received: $" << bonus2 << std::endl;
double payCheck;
payCheck = bonus2 + sales;
std::cout << salesPerson << "'s paycheck: $" << payCheck << std::endl;
std::cout << "\n";
}
}
return 0;
}