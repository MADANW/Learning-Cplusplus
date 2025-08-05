/* Console Calculator */

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float x , y;
    char op;

    cout << "Welcome to the Console Calculator (I only do basic arithmetic) \n";
    cout << "Enter your equation and follow each number / operator by a space \n";
    cout << "otherwise, put 0 m 0 for list of operators \n";
    cin >> x >> op >> y;

    switch (op)
    {
    case '+':
        cout << x + y << endl;
        break;
    case '-':
        cout << x - y << endl;
        break;
    case '*':
        cout << x * y << endl;
        break;
    case '/':
        cout << x / y << endl;
        break;
    case '^':
        cout << pow(x, y) << endl;
        break;
    case '%':
        cout << (int)x % (int)y << endl;
        break;

    case 'm':
        cout << "List of Operators\n";
        cout << "Addition: + \n";
        cout << "Subtraction: - \n";
        cout << "Multiplication: * \n";
        cout << "Division: / \n";
        cout << "Exponentiation: ^ \n";
        cout << "Modulus: % \n";
        break;
    default:
        cout << "Invalid operator. Please try again." << endl;
        cout << "Use 0 m 0 for list of operators" << endl;
        cout << "Or use 0 0 0 to exit the program" << endl;
        if (x == 0 && y == 0 && op == '0') {
            cout << "Exiting the program." << endl;
            return 0;
        }
        break;
    }
    
    cout << "Thank you for using the Console Calculator!" << endl;
    cout << "Goodbye!" << endl;
    // Note: The above code is a simple console calculator that performs basic arithmetic operations.
    // It uses a switch statement to determine the operation based on user input.
    // The user can input two numbers and an operator, and the program will perform the corresponding
    // arithmetic operation. If the user inputs "0 m 0", it will display a list of available operators.
    // If the user inputs "0 0 0", the program will exit gracefully.
    // The program also handles invalid operator inputs by prompting the user to try again
    // and provides a way to exit the program.
    return 0;
}