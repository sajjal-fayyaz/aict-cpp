#include <iostream>
using namespace std;

int main() {
    int n;

    // Prompt the user to input a positive number (n)
    cout << "Enter a positive number (n): ";
    cin >> n;

    // Check if the input number is positive
    if (n <= 0) {
        cout << "Please enter a positive number greater than 0." << endl;
    } else {
        int count = 0;

        // Display the header for the numbers divisible by 3
        cout << "Numbers divisible by 3 between 1 and " << n << " are:" << endl;

        // Loop through all numbers from 1 to n and check divisibility by 3
        for (int i = 1; i <= n; ++i) {
            if (i % 3 == 0) {
                cout << i << " "; // Print numbers divisible by 3
                ++count; // Increment count
            }
        }

        // Print the total count of numbers divisible by 3
        cout << endl << "Total count of numbers divisible by 3: " << count << endl;
    }

    return 0;
}
