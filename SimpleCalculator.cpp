#include <iostream>
#include <limits>

using namespace std;

int main() {
    char operation;
    double num1, num2, result;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    // Clear the input buffer to avoid any previous errors
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    bool validOperation = false;

    // Keep prompting the user until a valid operation is entered
    do {
        cout << "Enter operation (+, -, *, /): ";
        cin >> operation;

        // Check if the operation is one of the valid characters
        if (cin.good() && (operation == '+' || operation == '-' || operation == '*' || operation == '/')) {
            validOperation = true;
        } else {
            cout << "Error: Invalid operation! Please enter a valid operation." << endl;

            // Clear the input buffer to avoid any errors
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    } while (!validOperation);

    // Perform the operation
    switch (operation) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
            break;
        default:
            cout << "Error: Invalid operation!" << endl;
    }

    return 0;
}
