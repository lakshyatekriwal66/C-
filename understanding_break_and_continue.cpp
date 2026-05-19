#include<iostream>
using namespace std;

int main() {
    int option, num;

    do {
        
        
        cout << "1. Print Even numbers till N" << endl;
        cout << "2. Print Odd numbers till N" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter choice: ";
        cin >> option;

        
        if(option < 1 || option > 3) {
            cout << "Invalid choice! Try again." << endl;
            continue;  // Goes to lop again 
        }

        // Exit
        if(option == 3) {
            cout << "Goodbye!" << endl;
            break;  // Closes the loop
        }

       
        cout << "Enter the number till you want to print the numbers : ";
        cin >> num;

        // for Even numbers
        if(option == 1) {
            cout << "Even numbers: ";
            for(int i = 2; i <= num; i++) {
                if(i % 2 != 0) continue;  
                cout << i << " ";
            }
            cout << endl;
        }

        // for Odd numbers
        if(option == 2) {
            cout << "Odd numbers: ";
            for(int i = 1; i <= num; i++) {
                if(i % 2 == 0) continue; 
                cout << i << " ";
            }
            cout << endl;
        }

    } while(true);  
    return 0;
}