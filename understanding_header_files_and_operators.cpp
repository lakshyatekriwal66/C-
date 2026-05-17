#include <iostream> //This is a system header file that allows us to use input  and output functions
#include "User-Header-File.h"  //This is a user defined header file only work when the file is in the same directory as the source file

using namespace std;
int main(){
    int a,b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    //Using some arithemetic operators
    
    cout << "The sum of a and b is:" << a + b <<endl;
    cout << "The difference of a and b is: " << a - b <<endl;
    cout << "The product of a and b is: " << a*b <<endl;
    cout << "The remainder of a and b is: " << a%b <<endl;
    cout << "The quotient of a and b is: " << a/b <<endl;
    cout << "The value of b++ is: " << b++ <<endl; //This will print b and then increment it by 1 
    cout << "The value of b-- is: " << b-- <<endl; //This will print b and then decrement it by 1
    cout << "The value of ++b is: " << ++b <<endl; //This wwill increment b by 1 and then print it 
    cout << "The value of --b is: " << --b <<endl; //This will decrement b by 1 and then print it

    //Using some assignment operators
    float c = 8.45; // = is the assignment operator that assigns the value of 8.45 to c

    //Using some comparison operators

    
    return 0;

}