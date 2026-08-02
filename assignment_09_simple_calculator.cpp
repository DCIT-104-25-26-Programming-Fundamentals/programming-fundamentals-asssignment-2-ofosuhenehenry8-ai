// =============================================================================
// PROGRAMMING FUNDAMENTALS — Assignment 9
// =============================================================================
//
// TASK: Console-Based Simple Calculator
//
// Build a calculator program that runs in the console and performs basic
// arithmetic operations based on the user's input.
//
// -----------------------------------------------------------------------------
// OPERATIONS YOUR CALCULATOR MUST SUPPORT
// -----------------------------------------------------------------------------
//
//   1. Addition          ( + )    e.g.  10 + 3  =  13
//   2. Subtraction       ( - )    e.g.  10 - 3  =  7
//   3. Multiplication    ( * )    e.g.  10 * 3  =  30
//   4. Division          ( / )    e.g.  10 / 3  =  3.33
//   5. Modulus           ( % )    e.g.  10 % 3  =  1  (remainder)
//   6. Exponentiation    ( ^ )    e.g.  2 ^ 8   =  256
//   7. Quit
//
// -----------------------------------------------------------------------------
// HOW THE MENU SHOULD LOOK
// -----------------------------------------------------------------------------
//
//   ============================
//        SIMPLE CALCULATOR
//   ============================
//   1. Addition
//   2. Subtraction
//   3. Multiplication
//   4. Division
//   5. Modulus
//   6. Exponentiation
//   7. Quit
//   Select an operation (1-7):
//
// -----------------------------------------------------------------------------
// EXPECTED INTERACTION EXAMPLE
// -----------------------------------------------------------------------------
//
//   Select an operation (1-7): 4
//   Enter first number : 10
//   Enter second number: 3
//   Result: 10 / 3 = 3.33
//
//   Select an operation (1-7): 4
//   Enter first number : 5
//   Enter second number: 0
//   Error: Cannot divide by zero.
//
//   Select an operation (1-7): 7
//   Goodbye!
//
// -----------------------------------------------------------------------------
// REQUIREMENTS
// -----------------------------------------------------------------------------
// - Each arithmetic operation MUST be written as its own function.
// - Use a loop so the calculator keeps running until the user selects Quit.
// - Division by zero must be caught and handled with a clear error message
//   (do NOT let the program crash).
// - Use fixed and setprecision(2) to display results to 2 decimal places.
// - Handle invalid menu choices gracefully.
// - For exponentiation use a loop or the pow() function from <cmath>.
//

// =============================================================================
// YOUR CODE BELOW — remove the // symbols from the scaffold and fill it in
// =============================================================================


#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


double addition(double a, double b);
double subtraction(double a, double b);
double multiplication(double a, double b);
double divide(double a, double b);
int modulusOperation(int a, int b);
double exponentiation(double a, double b);

int main()
{
    int choice;
    double num1, num2;

    do
    {
        cout << "\n============================\n";
        cout << "     SIMPLE CALCULATOR\n";
        cout << "============================\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Modulus\n";
        cout << "6. Exponentiation\n";
        cout << "7. Quit\n";
        cout << "Select an operation (1-7): ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            cout << fixed << setprecision(2);
            cout << "Result: " << num1 << " + " << num2
                 << " = " << addition(num1, num2) << endl;
            break;

        case 2:
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            cout << fixed << setprecision(2);
            cout << "Result: " << num1 << " - " << num2
                 << " = " << subtraction(num1, num2) << endl;
            break;

        case 3:
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            cout << fixed << setprecision(2);
            cout << "Result: " << num1 << " * " << num2
                 << " = " << multiplication(num1, num2) << endl;
            break;

        case 4:
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;

            if (num2 == 0)
            {
                cout << "Error: Cannot divide by zero." << endl;
            }
            else
            {
                cout << fixed << setprecision(2);
                cout << "Result: " << num1 << " / " << num2
                     << " = " << divide(num1, num2) << endl;
            }
            break;

        case 5:
        {
            int a, b;

            cout << "Enter first integer: ";
            cin >> a;
            cout << "Enter second integer: ";
            cin >> b;

            if (b == 0)
            {
                cout << "Error: Cannot divide by zero." << endl;
            }
            else
            {
                cout << "Result: " << a << " % " << b
                     << " = " << modulusOperation(a, b) << endl;
            }

            break;
        }

        case 6:
            cout << "Enter base: ";
            cin >> num1;
            cout << "Enter exponent: ";
            cin >> num2;
            cout << fixed << setprecision(2);
            cout << "Result: " << num1 << " ^ " << num2
                 << " = " << exponentiation(num1, num2) << endl;
            break;

        case 7:
            cout << "Goodbye!" << endl;
            break;

        default:
            cout << "Invalid choice. Please select a number from 1 to 7." << endl;
        }

    } while (choice != 7);

    return 0;
}

// Function Definitions

double addition(double a, double b)
{
    return a + b;
}

double subtraction(double a, double b)
{
    return a - b;
}

double multiplication(double a, double b)
{
    return a * b;
}

double divide(double a, double b)
{
    return a / b;
}

int modulusOperation(int a, int b)
{
    return a % b;
}

double exponentiation(double a, double b)
{
    return pow(a, b);
}

