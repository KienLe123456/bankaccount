#include "account.h"
using namespace std;

int main() {
    string accNumber, accHolderName;
    double initialBalance;

    // Prompt the user for input
    cout << "Enter account number: ";
    cin >> accNumber;

    cout << "Enter account holder name: ";
    cin.ignore(); // Ignore the newline character in the input buffer
    getline(cin, accHolderName);

    cout << "Enter initial balance: ";
    cin >> initialBalance;

    // Create a BankAccount object
    BankAccount account(accNumber, accHolderName, initialBalance);

    int choice;
    double amount;

    while (1) {
        // Display menu
        cout << "\nMenu:\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Check Balance\n";
        cout << "4. Quit\n";
        cout << "Enter your choice (from 1 - 4): ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter amount to deposit: ";
            cin >> amount;
            account.deposit(amount);
            break;
        case 2:
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            account.withdraw(amount);
            break;
        case 3:
            cout << "Current balance: " << account.checkBalance() << endl;
            break;
        case 4:
            return 0; // Exit the program
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}