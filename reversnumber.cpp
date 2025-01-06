#include <iostream>
using namespace std;

int main() {
    // Step 1: Ask user for an integer input
    int number;
    cout << "Please enter an integer: ";
    cin >> number;

    // Step 2: Initialize variables for reversed number and sum of digits
    int reversedNumber = 0;
    int digitSum = 0;

    // Step 3: Extract digits, reverse the number and calculate the sum of digits
    int tempNumber = number;  // Store the original number for future reference
    while (tempNumber != 0) {
        int digit = tempNumber % 10;  // Get the last digit
        reversedNumber = reversedNumber * 10 + digit;  // Build the reversed number
        digitSum += digit;  // Add the digit to the sum
        tempNumber /= 10;  // Remove the last digit from tempNumber
    }

    // Step 4: Output the reversed number and the sum of its digits
    cout << "Reversed number: " << reversedNumber << endl;
    cout << "Sum of digits: " << digitSum << endl;

    return 0;
}
