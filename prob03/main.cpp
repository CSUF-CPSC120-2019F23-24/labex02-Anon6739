// Name:
// This program calculates the tax and tip on a restaurant bill.

#include <iostream>

int main()
{
  double tax, tip, total_bill, total_meal_cost;

  // Welcome to the Restaurant Bill Calculator.
  std::cout << "Welcome to the Restaurant Bill Calculator!\n ";
  std::cout << "What is the 'total meal cost'? ";
  std::cin >> total_meal_cost;

  // Adding tax to total cost.
  tax = 0.0775 * total_meal_cost;
  std::cout << "Tax: \t\t " << tax << "\n";

  // Adding tip to total cost.
  tip = 0.20 * total_meal_cost;
  std::cout << "Tip: \t\t " << tip << "\n";

  // Calculate total meal cost, tax, and tip.
  total_bill = total_meal_cost + tax + tip;

  // The total bill cost.
  std::cout << "Total Bill: \t" << total_bill << " \n";

  return 0;
}
