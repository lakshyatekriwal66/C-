#include <iostream>
using namespace std;
int main(){

    int num, digits, sum = 0;
    cout << "Enter a number: ";
    cin >> num;

    while (num != 0)
    {
        digits = num%10; //Taking the last number
        sum = sum + digits;
        num = num/10; //Removing last digit
    }
    cout << "The sum of the digits is: " << sum << endl;
    

    return 0;
}