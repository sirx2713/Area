#include <iostream>
#include <cmath>
using namespace std;

int main()
{
string name;
std::cout <<  "Username: ";
getline(cin,name);

std::cout << "Username: " << name << std::endl;

name.push_back('X');
std::cout << "Coded by: " << name << std::endl;

name.pop_back();
std::cout << "Username: " << name << std::endl;

return 0;
}