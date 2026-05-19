#include <iostream>
using namespace std;
int main(){
    int num, digit, largest = 0;

    cout << "Enter the number: ";
    cin >> num;

    while (num != 0)
    {
        digit = num%10;
        if (digit > largest)
        {
            largest = digit;
        }
        num = num/10;
        
    }
    cout << "Largest digit is " << largest << endl; 
    


    return 0;

}