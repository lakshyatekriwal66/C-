#include <iostream>
using namespace std;
int main()
{
   cout << "Enter a two digit number: ";
   int number, first_digit, second_digit;
   cin >> number;
   first_digit = number / 10;
   second_digit = number % 10;
   cout << "The reversed number is: " << second_digit * 10 + first_digit;

    return 0;
}