#include <iostream>
#include <iomanip> //A header which used to manipulate the output of the data

using namespace std;   

int main(){

    

    const float pi = 3.14; //A constant is used to store a value that cannot be changed afterwards

    cout << "The value of pi is: " << pi << endl;

    int length = 40;
    const float width = 20.4;

    double area = length * width; 
    cout << "The area of the rectangle is: " << area << endl;

    length = 1738;

    cout << "The new area of the rectangle is: " << setw(4) << length * width <<endl;
    // setw is used to set the width of the output 

    int a = 420, b = 300, c = 2;

    int sol = a/b*c;
    int sol2 = a/(b*c);

    cout << "The value of a/b*c is: " << setw(4) << sol << endl;
    cout << "The value of a/(b*c) is: " << setw(4) << sol2 << endl;






    return 0;
}