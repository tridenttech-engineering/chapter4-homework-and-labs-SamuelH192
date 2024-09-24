// Intermediate14.cpp - displays total sold and percentages of small, medium,
// large, and family sold Created/revised by Samuel Hollenbeck on 9/20/24

#include <iostream>
using namespace std;

int main() {

  //declare variables
  double smallPizza = 0.0;
  double medPizza = 0.0;
  double largePizza = 0.0;
  double famPizza = 0.0;
  double total = 0.0;
  double smallPizzaPercent = 0.0;
  double medPizzaPercent = 0.0;
  double largePizzaPercent = 0.0;
  double famPizzaPercent = 0.0;

  //enter input item
  cout << "Enter small pizza amount: ";
  cin >> smallPizza;
  cout << "Enter medium pizza amount: ";
  cin >> medPizza;
  cout << "Enter large pizza amount: ";
  cin >> largePizza;
  cout << "Enter family pizza amount: ";
  cin >> famPizza;
  
  //calculate and display the total pizza sold and percentages
  total = smallPizza + medPizza + largePizza + famPizza;
  smallPizzaPercent = (smallPizza / total) * 100;
  medPizzaPercent = (medPizza / total) * 100;
  largePizzaPercent = (largePizza / total) * 100;
  famPizzaPercent = (famPizza / total) * 100;
  cout << "Total pizza sold: " << total << endl;
  cout << "Small pizza percent: " << smallPizzaPercent << endl;
  cout << "Medium pizza percent: " << medPizzaPercent << endl;
  cout << "Large pizza percent: " << largePizzaPercent << endl;
  cout << "Family pizza percent: " << famPizzaPercent << endl;

  return 0;
  
} // end of main function