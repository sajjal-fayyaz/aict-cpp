#include <iostream>
using namespace std;

int main() {
    int largest;  // Variable to store the largest number
    int currentNumber;  // Variable to store each number input by the user

    // Prompt the user to enter 5 numbers
    cout << "Please enter 5 numbers to find the largest:" << endl;

    // Accept the first number to initialize 'largest' as a baseline
    cout << "Enter number 1: ";
    cin >> largest;

    // Loop to accept 4 more numbers
    for (int i = 2; i <= 5; ++i) {
        cout << "Enter number " << i << ": ";
        cin >> currentNumber;

        // Compare current number with 'largest' and update if needed
        if (currentNumber > largest) {
            largest = currentNumber;  // Update 'largest' if currentNumber is greater
        }
    }

    // Output the largest number found
    cout << "The largest number is: " << largest << "." << endl;

    return 0;
}
