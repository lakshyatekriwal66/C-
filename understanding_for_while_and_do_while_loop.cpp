#include <iostream>
#include <iomanip>
using namespace std;
int main(){

    int i;
    cout << "Enter the number of which you want to get the multiplication table: ";
    cin>> i;

    for (int n = 1; n <= 10; n++) // for (initialization; condition; increment/decrement)  for an infinite output make the condtion always true
    {
       cout << i << " x " << n << " = " << setw(2) << i*n << endl;

    }

    int n = 11;
    while ( n <= 15 ) 
    {
        cout << i << " x " << n << " = " << setw(3) << i*n << endl;
        n++;
     }

     do //do while loop will give atleast one output even though its condition is false 
     {
        cout << i << " x " << n << " = " << setw(3) << i*n << endl;
        n++;
     } while (n <= 20);

       return 0;
     
    
    
}