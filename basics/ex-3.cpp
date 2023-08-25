#include <iostream>
using namespace std; 
int main() { 
   double  sales = 95000 ;
   const double state_tax_rate= 0.4;
   double  state_tax = sales * state_tax_rate;
   const double county_tax_rate = 0.2 ;
   double county_tax = ( sales*county_tax_rate ) ;
   double  profit = sales - (state_tax + county_tax);
   cout << "Sales: $"<< sales  << endl  <<"state_tax = $" << state_tax <<endl <<"county_tax = $" << county_tax <<endl;
    std::cout <<"profit = $" << profit ;
    return 0 ; 
}