#include <iostream>
#include <cmath>
using namespace std;

int main() {

string opt;
std::cout << "Username: ";
std::cin >> opt;

std::cout << "You entered: " << opt << std::endl;
opt.push_back(' ');
opt.push_back('[');
opt.push_back('1');
opt.push_back(' ');
opt.push_back('o');
opt.push_back('r');
opt.push_back(' ');
opt.push_back('2');
opt.push_back(']'); 
std::cout << "You entered: " << opt << std::endl;

int answer;
std::cout << "Enter '1' if correct or '2' if incorrect: ";
std::cin >> answer;

if (answer == 1)
{
    opt.pop_back();
    opt.pop_back();
    opt.pop_back();
    opt.pop_back();
    opt.pop_back();
    opt.pop_back();
    opt.pop_back();
    opt.pop_back();
    opt.pop_back();
    std::cout << "Username: " << opt << std::endl;
}
if (answer == 2)
{
    string opt2;
    std::cout << "Username: ";
    std::cin >> opt2;
    std::cout << "You entered: " << opt2 << std::endl;
}
if (answer >= 3)
{
    std::cout << "You entered an invalid input: " << std::endl;
}

return 0;
}