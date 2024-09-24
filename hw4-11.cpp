// Introductory11.cpp - displays ending balance
// Created/revised by Samuel Hollenbeck on 9/20/24

#include <iostream>
using namespace std;

int main() {
  
  //declare variables
  double begBal = 0.0;
  double totalDep = 0.0;
  double totalWith = 0.0;
  double endBal = 0.0;

  //enter input item
  cout << "Enter the beginning balance: ";
  cin >> begBal;
  cout << "Enter the total deposits: ";
  cin >> totalDep;
  cout << "Enter the total withdrawals: ";
  cin >> totalWith;

  //calculate and display the sales tax
  endBal = begBal + totalDep - totalWith;
  cout << "Ending balance: $" << endBal << endl;

  return 0;
  
} // end of main function