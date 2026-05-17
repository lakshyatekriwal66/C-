#include <iostream>
using namespace std;
int main() {
    double a;
    cout << "Enter a number: ";
    cin >> a;

    if ( a - int(a) >= 0.5){ 
        cout << "Rounded off value of a is: " << int(a) + 1 << endl;
    }
    else if ( (int)a == (int)a){
        cout << "Rounded off value of a is: " << int(a) << endl;
    }
    else{
        cout << "Rounded off value of a is: " << int(a) - 1 << endl;    }

    return 0;
}