/* 
This is a simpling banking program.
in this program we will create a simple banking system that allows users to create accounts, deposit money, withdraw money, and check their balance.
*/
#include <iostream>
#include <string>
using namespace std;

int main() {

int choice;
string name;
double balance = 0.0; // Persistent balance variable
bool accountCreated = false; // Track if account exists

cout << "****** Welcome to your local bank ******\n";

do {
    cout << "\nHere are your options:\n";
    cout << "1. Withdraw\n2. Deposit\n3. See balance\n4. Create account\n5. Leave\n";
    cout << "Enter your choice: ";
    cin >> choice;


    switch (choice) {
        case 1: // Withdraw
            if (!accountCreated) {
                cout << "Please create an account first!\n";
            } else {
                cout << "You chose withdraw\n";
                double withdrawAmount;
                cout << "Enter withdrawal amount: ";
                cin >> withdrawAmount;
                
                if (withdrawAmount > balance) {
                    cout << "Insufficient funds! Your balance is: $" << balance << endl;
                } else {
                    balance -= withdrawAmount;
                    cout << "Withdrawal successful! New balance: $" << balance << endl;
                }
            }
            break;
            
        case 2: // Deposit
            if (!accountCreated) {
                cout << "Please create an account first!\n";
            } else {
                cout << "You chose deposit\n";
                double depositAmount;
                cout << "Enter deposit amount: ";
                cin >> depositAmount;
                
                balance += depositAmount;
                cout << "Deposit successful! New balance: $" << balance << endl;
            }
            break;
            
        case 3: // See balance
            if (!accountCreated) {
                cout << "Please create an account first!\n";
            } else {
                cout << "You chose to see your balance\n";
                cout << "Your current balance is: $" << balance << endl;
            }
            break;
            
        case 4: // Create account
            if (accountCreated) {
                cout << "Account already exists!\n";
            } else {
                cout << "You chose to create an account\n";
                cin.ignore(); // Clear the input buffer
                cout << "Enter your name: ";
                getline(cin, name);
                cout << "Enter initial deposit: ";
                cin >> balance;
                
                accountCreated = true;
                cout << "Account created for " << name << " with balance: $" << balance << endl;
            }
            break;
            
        case 5: // Leave
            cout << "Thank you for using our banking system. Goodbye!\n";
            break;
            
        default:
            cout << "****** Wrong choice *****\n";
            cout << "***** Try again *****\n";
            break;
    }

} while (choice != 5);

return 0;
}

