#include <iostream>
using namespace std;
int main(){

    //Pointers
    int x = 26;
   
    int* y = &x;  //y is storing the adress of x 

    //Pointers are data types which store address of other data types

    cout << "The address of x is: " << y << endl;
    cout << "The adress of x is: " << &x << endl;  // &--> is used to store address of a variable
    cout << "The value of x at address y is: " << *y << endl; //*--> is used to store the value of the variable

    //Pointer to pointer

    int** z = &y; //Pointer to pointer is used to store the address of other pointer 
    cout << "The address of pointer y is: " << z << endl;
    cout << "The address of pointer y is: " << &y << endl;
    cout << "The address of x is: " << *z << endl; //*--> is used in pointer to pointer to give address value of the variable whch is stored in a pointer(y) 
    cout << "The value of x is: " << **z << endl; // **--> is used in pointer to pointer to give the value stored in pointer(y) which is already stored in a pointer(z) 



    return 0;

}