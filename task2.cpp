#include <iostream>
using namespace std;

int main() {
    // Declare a variable to hold the user input
    int n;

    // Ask the user to input a number up to which we will check even and odd numbers
    cout << "Please enter a number: ";
    cin >> n;

    // Loop through numbers from 1 to n
    for (int i = 1; i <= n; ++i) {
        // Determine if the current number i is even or odd
        if (i % 2 == 0) {
            cout << i << " is an even number." << endl;  // If i is divisible by 2, it is even
        } else {
            cout << i << " is an odd number." << endl;  // Otherwise, it is odd
        }
    }

    return 0;
}
