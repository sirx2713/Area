#include <iostream>
using namespace std;

int main() {

const double sales = 95000;
double state_tax;
double country_tax;
double total_sales;
const double stateTaxRate = 0.04;
const double countryTaxRate = 0.02;

state_tax = 95000 * stateTaxRate;
country_tax = countryTaxRate * 95000;
total_sales = 95000 - (state_tax + country_tax);

cout << "Sales: $" << sales << endl;

cout << "State Tax: $" << state_tax << endl;

cout << "Country Tax: $" << country_tax << endl;

cout << "Total Sales: $" << total_sales << endl;

return 0;
}