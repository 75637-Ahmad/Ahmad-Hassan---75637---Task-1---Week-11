#include <iostream>
using namespace std;
int main() {
    int choice;
    double num1, num2;
    do {
        cout << "\n--- Menu-Driven Calculator ---\n";
        cout << "1. Add\n";
        cout << "2. Subtract\n";
        cout << "3. Multiply\n";
        cout << "4. Divide\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice >= 1 && choice <= 4) {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
        }
        switch (choice) {
        case 1:
            cout << "Result = " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Result = " << num1 - num2 << endl;
            break;
        case 3:
            cout << "Result = " << num1 * num2 << endl;
            break;
        case 4:
            if (num2 != 0)
                cout << "Result = " << num1 / num2 << endl;
            else
                cout << "Error! Division by zero not allowed.\n";
            break;
        case 5:
            cout << "Exiting program...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5);
    return 0;
}

