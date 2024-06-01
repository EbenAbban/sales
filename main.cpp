#include <iostream>
using namespace std;
int main() {
  int sales=95000;  
  int StateTax=0.04*sales;
  int CountyTax=0.2*sales;
  int TotalTax=StateTax+CountyTax;
  cout << "sales = " <<sales <<endl;
  cout << "StateTax = " <<StateTax <<endl;
  cout <<"CountyTax = " <<CountyTax <<endl;
  cout <<"TotalTax =" <<TotalTax <<endl;
  cout << "Thank you hope to see you again!";
  
}
