#include <iostream>
using namespace std;
int main(){
    
    int marks[5];
    cout << "Enter the marks of 5 students: " << endl;
    cin >> marks[0] >> marks[1] >> marks[2] >> marks[3] >> marks[4];
    

    int sum = marks[0] + marks[1] + marks[2] + marks[3] + marks[4];

    int average = sum / 5;

    switch ( sum > 500)
    {
    case 1:
        cout << "Not a valid input! Try again."<< endl;
        break;
    
    default:
       
    

    cout <<"The sum of marks is: " << sum << endl;
    cout <<"The average marks of class is: " << average << endl;

    

    int* ptr = &sum;
    int* pntr = &average;

    cout << "The address of sum is: " << ptr << " and its value is: " << *ptr << endl;
    cout << "The address of average is: " << pntr << " and its value is: " << *pntr << endl;

    //Using pointers arithmetic

    int* variable = marks;
    for (int i = 0 ; i < 5; i++)
    {
         cout << "The address of marks " << i << " is " << variable+i << " and its value is: " << *(variable+i) <<endl; 
    }
     break;
    }
    
    return 0;
}