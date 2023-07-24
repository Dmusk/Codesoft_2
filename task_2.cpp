// Codesoft SIP Task 2
// C++ Programing
// SIMPLE CALCULATOR :-
/*  Develop a calculator program that performs basic arithmetic
    operations such as addition, subtraction, multiplication, and
    division. Allow the user to input two numbers and choose an
    operation to perform.       */

#include <iostream>
using namespace std;

void Perform_operation(double num1, double num2, char operation)
{
    double result;
    bool validOperation = true;
    int ch;

    // Perform the chosen operation
    do
    {
        switch (operation)
        {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0)
            {
                result = num1 / num2;
            }
            else
            {
                cout << "Error: Division by zero is not allowed." << endl;
                validOperation = false;
            }
            break;
        default:
            cout << "Error: Invalid operation." << endl;
            validOperation = false;
            break;
        }
        // Display the result if the operation was valid
        if (validOperation)
        {
            cout << "Result: " << num1 << " " << operation << " " << num2 << " = " << result << endl;
        }

        cout << "Do you want to perform Next operation choose(1/0) :" << endl;
        cin >> ch;
    } while (ch != 0);
}
int main()
{
    double num1, num2;
    char operation;

    cout << "Simple Calculator Program" << endl;
    cout << "------------------------" << endl;

    // Get input from the user
    cout << "Enter the first number: " << endl;
    cin >> num1;

    cout << "Enter the second number: " << endl;
    cin >> num2;

    cout << "Choose + - * / " << endl;
    cin >> operation;

    Perform_operation(num1, num2, operation);

    return 0;
}
