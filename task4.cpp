#include <iostream>
using namespace std;

int main() {
    int number, limit;

    // Prompt the user to input a base number for the multiplication table
    cout << "Enter a number for the multiplication table: ";
    cin >> number;

    // Ensure the number is positive (greater than 0)
    if (number > 0) {
        // Ask for the limit (where the multiplication should stop)
        cout << "Enter the limit (up to where the table should be displayed): ";
        cin >> limit;

        // Display the multiplication table
        cout << "Multiplication table for " << number << " up to " << limit << ":\n";
        for (int i = 1; i <= limit; ++i) {
            // Output each line of the multiplication table
            cout << number << " x " << i << " = " << number * i << endl;
        }
    } else {
        // Handle invalid input where the number is not positive
        cout << "Error: Please enter a number greater than 0.\n";
    }

    return 0;
}
