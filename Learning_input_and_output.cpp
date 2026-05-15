#include <iostream>
using namespace std;

int main()
{
    int first_number, second_number,third_number;


    cout << "Enter the first number: "; // "<< is the insertion operator, used to output data to the console"
    cin >> first_number; // ">>" is the extraction operator, used to take input from the user and store it in the variable
    cout << "Enter the second number: ";
    cin >> second_number; 
    cout << "Enter the third number: ";
    cin >> third_number;

    cout << "The sum of " << first_number << " and " << second_number << " is " << first_number + second_number ;  
    cout << "\nThe multiplication of " << first_number << " and " << second_number << " is " << first_number * second_number;
    cout << "\nThe subtraction of " << first_number << " and " << second_number << " is " << first_number - second_number;
    cout << "\nThe division of " << first_number << " and " << second_number << " is " << (first_number) / second_number;
    cout << "\nThe " <<first_number <<"%" " of " << second_number<< " is " <<(first_number)*(second_number)/100;

    cout<< "\nThe table of " <<third_number << " is:";
    cout << "\n" <<third_number << " x 1 = " << third_number*1;
    cout << "\n" <<third_number << " x 2 = " << third_number*2;
    cout << "\n" <<third_number << " x 3 = " << third_number*3;
    cout << "\n" <<third_number << " x 4 = " << third_number*4;
    cout << "\n" <<third_number << " x 5 = " << third_number*5;
    cout << "\n" <<third_number << " x 6 = " << third_number*6;
    cout << "\n" <<third_number << " x 7 = " << third_number*7;
    cout << "\n" <<third_number << " x 8 = " << third_number*8;
    cout << "\n" <<third_number << " x 9 = " << third_number*9;
    cout << "\n" <<third_number << " x 10 = " << third_number*10;




    return 0;
}
