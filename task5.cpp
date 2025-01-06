#include <iostream>
using namespace std;

int main() {
    int number;

    // Ask the user to input a number
    cout << "Please enter a number: ";
    cin >> number;

    int digitSum = 0;
    int workingNumber = number;  // Store the number for digit extraction

    // Extract digits and calculate the sum of the digits
    while (workingNumber > 0) {
        digitSum += workingNumber % 10;  // Add the last digit to the sum
        workingNumber /= 10;  // Remove the last digit
    }

    // Output the sum of the digits
    cout << "The sum of the digits is: " << digitSum << endl;

    // Check if the sum of the digits is divisible by 3
    if (digitSum % 3 == 0) {
        cout << "The sum is divisible by 3: Yes" << endl;
    } else {
        cout << "The sum is divisible by 3: No" << endl;
    }

    return 0;
}
