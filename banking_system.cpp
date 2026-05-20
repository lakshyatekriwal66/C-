#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "How many customers are there?" << endl;
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a valid input!" << endl;
        return 0;
    }

    string names[n];
    string password[n];
    float balance[n];
    int lock[n];

    
    for (int i = 0; i < n; i++) {
        lock[i] = 0;
    }

    // Customer Registration
    cout << "\n====Customer Registration====" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Enter the name of customer #" << (i + 1) << ": ";
        cin >> names[i];
        cout << "Enter the opening balance: Rs. ";
        cin >> balance[i];
        cout << "Set your password: ";
        cin >> password[i];
    }

    // Main Menu
    int choice;
    do {
        cout << "\n----====Main Menu====----" << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. EXIT" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        // Exit
        if (choice == 4) {
            cout << "Thank you! Visit us again" << endl;
            break;
        }

        // Invalid choice
        if (choice <= 0 || choice > 4) {
            cout << "Invalid choice!" << endl;
            continue;
        }

        
        cout << "\n====Select the customer====" << endl;
        for (int i = 0; i < n; i++) {        
            cout << i + 1 << ". " << names[i];
            if (lock[i] == 1)
                cout << " LOCKED!!!";
            cout << endl;
        }

    
        int customer;
        cout << "Enter customer number: ";
        cin >> customer;

        // Invalid customer
        if (customer < 1 || customer > n) {
            cout << "Invalid Customer!" << endl;
            continue;
        }

        int x = customer - 1;

        // Lock check
        if (lock[x] == 1) {
            cout << "Account is Locked! Contact bank." << endl;
            continue;
        }

        // Password check
        int attempts = 0;
        bool loggedIn = false;

        while (attempts < 3) {
            string enteredPass;
            cout << "Enter password: ";
            cin >> enteredPass;

            if (enteredPass == password[x]) {
                loggedIn = true;
                break;
            } else {
                attempts++;
                if (attempts < 3)
                    cout << "Wrong password! " << 3 - attempts << " attempts left" << endl;
            }
        }

        // Locking account
        if (attempts == 3) {
            lock[x] = 1;
            cout << "Account LOCKED! Too many wrong attempts." << endl;
            continue;
        }

        cout << "Login Successful! Welcome " << names[x] << endl;

        // Operations
        if (choice == 1) {
            float amount;
            cout << "Enter deposit amount: Rs. ";
            cin >> amount;
            if (amount <= 0) {
                cout << "Invalid amount!" << endl;
                continue;
            }
            balance[x] = balance[x] + amount;
            cout << "Rs." << amount << " deposited!" << endl;
            cout << "New Balance: Rs." << balance[x] << endl;
        }
        else if (choice == 2) {
            float amount;
            cout << "Enter withdrawal amount: Rs. ";
            cin >> amount;
            if (amount <= 0) {
                cout << "Invalid amount!" << endl;
                continue;
            }
            if (amount > balance[x]) {
                cout << "Insufficient balance!" << endl;
                cout << "Available: Rs." << balance[x] << endl;
                continue;
            }
            balance[x] = balance[x] - amount;
            cout << "Rs." << amount << " withdrawn!" << endl;
            cout << "New Balance: Rs." << balance[x] << endl;
        }
        else if (choice == 3) {
            cout << "Balance: Rs." << balance[x] << endl;
        }

    } while (true);

    // Final Summary
    cout << "\n====Final Summary====" << endl;
    cout << "------------------------" << endl;
    for (int i = 0; i < n; i++) {
        cout << names[i] << " -> Rs." << balance[i];
        if (lock[i] == 1)
            cout << " LOCKED";
        cout << endl;
    }

    return 0;
}