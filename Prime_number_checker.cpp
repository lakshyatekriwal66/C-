#include <iostream>
using namespace std;
int main(){
    int number, count = 1;  // 1 == true, 0 == false

    cout << "Enter a positive number: ";
    cin >> number;

    if (number <= 1)
    {
        count = 0;
    }
    
    for (int i = 2; i < number; i++)
    {
        
        if ( number % i == 0)
        {
            count = 0;
            break;
        }
    }
    if (count == 1)
    {
        cout << number << " is a Prime number." << endl;
    }
    else{
        cout << number << " is not a Prime number." << endl;
    }

    return 0;

}