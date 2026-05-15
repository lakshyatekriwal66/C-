#include<iostream>

using namespace std;
int variable = 7; //This is  a global variable
void sum(){
   int variable = 5;
    cout<<"The value of variable is: " <<variable;
}


int main() {

    int first_number = 24, second_number = 39;
    float pi = 3.14;
    char alphabet = 'S';
    bool statement = false; //True = 1, False = 0
    double Large_Number = 2.718281828459045;
    //int variable = 6;
       // variable = 41; //This is a local variable with the same name as the global variable, it will shadow the global variable within this scope

    sum(); //Calling the function to demonstrate global variable access


     

    cout << "\nThe value of first number is: " <<first_number;
    cout << "\nThe value of second number is: " <<second_number;
    cout << "\nThe value of pi is: " <<pi;
    cout <<" \nThe value of alphabet is: "  <<alphabet;
    cout << "\nThe value of statement is: " <<statement;
    cout << "\nThe value of Large Number is: " <<Large_Number;  
   
   

    return 0;
}
