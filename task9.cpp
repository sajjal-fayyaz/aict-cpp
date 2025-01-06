#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;

    // Prompt the user to input a number N
    cout << "Please enter a positive number (N): ";
    cin >> n;

    // Check if the input is positive
    if (n <= 0) {
        cout << "Please enter a number greater than 0." << endl;
        return 1;  // Exit the program if the input is invalid
    }

    // Loop through all numbers from 1 to N
    for (int i = 1; i <= n; ++i) {
        // Check if the current number is odd
        if (i % 2 != 0) {
            sum += i;  // Add the odd number to the sum
        }
    }

    // Display the result: sum of odd numbers
    cout << "The sum of odd numbers between 1 and " << n << " is: " << sum << endl;

    return 0;
}
