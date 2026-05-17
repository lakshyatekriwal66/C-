#include <iostream>
using namespace std;
int main(){

    int a, b, c;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter a second number: ";
    cin >> b;
    cout << "Enter a third number: ";
    cin >> c;

    if  (a >= b && a >= c) {
        cout << "The Largest number is: " << a << endl;
    }
    else if (b >= a && b >= c){ 
        cout << "The Largest number is: " << b << endl;
    }
    else {
        cout << "The Largest number is: " << c << endl;
    }
    int x;
    cout << "Enter a number: ";
    cin >> x; 

    switch (x>0)
    {
    case 1:
        cout << "The number is positive." << endl;
        break;
    
    default:
        cout << "The number is not positive." << endl;
        break;
    }
    return 0;
}