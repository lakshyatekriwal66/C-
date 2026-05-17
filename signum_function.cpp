#include <iostream>
using namespace std;
int main() {
    float num;
    cout<< "Enter the number: ";
    cin >> num;
    if (num > 0 ){
        cout << "The signum function of " << num << " is: 1" << endl;
    }
    else if (num < 0){
        cout << "The signum function of " << num << " is: -1" << endl;
    }
    else{
        cout << "The signum function of " << num << " is: 0" << endl;
    }

    return 0;
}