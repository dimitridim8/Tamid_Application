#include <iostream>
using namespace std;

// Function to perform calculation
float calculate(float x, float y, char sign) {
    if (sign == '+') {
        return x + y;
    } else if (sign == '-') {
        return x - y;
    } else if (sign == '*') {
        return x * y;
    } else if (sign == '/') {
        if (y == 0.0f) {
            cout << "Error: Division by zero!" << endl;
            return -1; // returning an error value
        }
        return x / y;
    } else if (sign == '%') {
        return static_cast<int>(x) % static_cast<int>(y);
    } else {
        cout << "Error: Invalid operator!" << endl;
        return -1; // returning an error value
    }
}

int main() {
    char continueCalculation = 'y';

    while (continueCalculation == 'y') {
        float num1, num2;
        char operation;

        // Prompt the user for input
        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter operation (+, -, *, /, %): ";
        cin >> operation;

        cout << "Enter second number: ";
        cin >> num2;

        // Perform calculation and display result
        float result = calculate(num1, num2, operation);
        if (result != -1) { // -1 is our error value
            cout << "Result: " << result << endl;
        }

        // Ask if the user wants to continue
        cout << "Do another calculation? (y/n): ";
        cin >> continueCalculation;
    }

    return 0;
}
