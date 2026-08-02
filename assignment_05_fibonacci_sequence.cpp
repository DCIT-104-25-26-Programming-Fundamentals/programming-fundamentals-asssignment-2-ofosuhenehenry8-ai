// =============================================================================
// PROGRAMMING FUNDAMENTALS — Assignment 5
// =============================================================================
//
// TASK: Fibonacci Sequence Generator
//
// The Fibonacci sequence is a series of numbers where each number is the sum
// of the two numbers before it:
//
//   0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
//
// Write a C++ program with TWO parts, each implemented as a function.
//
// -----------------------------------------------------------------------------
// PART A — Print the First N Terms
// -----------------------------------------------------------------------------
// - Ask the user how many terms (N) to display.
// - Print the first N numbers of the Fibonacci sequence on one line.
//
// Example:
//   How many terms? 7
//   Fibonacci sequence: 0 1 1 2 3 5 8
//
// -----------------------------------------------------------------------------
// PART B — Check if a Number Belongs to the Sequence
// -----------------------------------------------------------------------------
// - Ask the user to enter a number.
// - Determine whether that number is a Fibonacci number.
// - Print an appropriate message.
//
// Example:
//   Enter a number to check: 13
//   13 is a Fibonacci number.
//
//   Enter a number to check: 20
//   20 is NOT a Fibonacci number.
//
// -----------------------------------------------------------------------------
// REQUIREMENTS
// -----------------------------------------------------------------------------
// - Use a loop (not recursion) to generate the sequence in both parts.
// - N must be a positive integer. If it is not, print an error message.
// - Each part must be implemented in its own function (see scaffold below).
//

//
// =============================================================================
// YOUR CODE BELOW — remove the // symbols from the scaffold and fill it in
// =============================================================================

#include <iostream>
using namespace std;

void printFibonacci();
void checkFibonacci();

int main()
{
    int choice;

    do
    {
        cout << "\n===== FIBONACCI SEQUENCE GENERATOR =====\n";
        cout << "1. Print the first N Fibonacci terms\n";
        cout << "2. Check if a number is a Fibonacci number\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            printFibonacci();
            break;

        case 2:
            checkFibonacci();
            break;

        case 3:
            cout << "Goodbye!\n";
            break;

        default:
            cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 3);

    return 0;
}


void printFibonacci()
{
    int n;

    cout << "\nHow many terms? ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Error: N must be a positive integer.\n";
        return;
    }

    int first = 0, second = 1, next;

    cout << "Fibonacci sequence: ";

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            cout << first << " ";
        }
        else if (i == 2)
        {
            cout << second << " ";
        }
        else
        {
            next = first + second;
            cout << next << " ";
            first = second;
            second = next;
        }
    }

    cout << endl;
}


void checkFibonacci()
{
    int number;

    cout << "\nEnter a number to check: ";
    cin >> number;

    if (number < 0)
    {
        cout << number << " is NOT a Fibonacci number.\n";
        return;
    }

    int first = 0, second = 1, next = 0;

    while (next < number)
    {
        next = first + second;
        first = second;
        second = next;
    }

    if (number == 0 || number == 1 || next == number)
    {
        cout << number << " is a Fibonacci number.\n";
    }
    else
    {
        cout << number << " is NOT a Fibonacci number.\n";
    }
}
