#include <iostream>

int main()
{
  long long num;

  std::cout << "Enter a number: ";
  if (!(std::cin >> num))
  {
    std::cout << "Invalid input. Please enter a whole number.\n";
    return 1;
  }

  if (num % 2 == 0)
  {
    std::cout << num << " is Even.\n";
  }
  else
  {
    std::cout << num << " is Odd.\n";
  }

  return 0;
} 