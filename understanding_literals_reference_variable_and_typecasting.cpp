#include <iostream>
using namespace std;

int z = 39;

int main(){

    //Built in data types

    cout <<"Built in data types" << endl;

    int x, y, z;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of y: ";
    cin >> y;
    
    z = x + y;

    cout << "The value of z is: " << z <<endl; 
    cout << "The value of global z is: " << ::z <<endl; // :: is the scope operator that gives the gobal variable balue of z 

    //Literals

    cout << "Literals" << endl;

    float e = 2.718f; // f is used to specify that the literal is of type float
    long double e_long = 2.718l; // l is used to specify that the literal is of type long double

    //Reference variable

    cout << "Reference variable" << endl;

    float a = 5.5;
    float & b = a; // 'b' is a reference variable that refers to 'a'

    cout << "The value of a is: " << b << endl;

    //Typcasting 

    cout << "Typecasting" << endl;

    float c;
    cout << "Enter a decimel number :";
    cin >> c;

    cout << "The integer part of c is: " << (int)c << endl; // typecasting c to int
    cout << "The decimel part if c is: " << c - (int)c << endl; // typecasting c to float
    return 0;

}     