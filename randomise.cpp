#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

srand(time(0));
int number = rand() % 6;

cout << number;
cout << "\n";
return 0;
}