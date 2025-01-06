#include <iostream>
using namespace std;

int main() {
    int start, end;

    // Ask the user to input the starting and ending numbers
    cout << "Enter the starting number (a): ";
    cin >> start;
    cout << "Enter the ending number (b): ";
    cin >> end;

    // Ensure start is less than or equal to end
    if (start > end) {
        cout << "Error: The starting number must be less than or equal to the ending number." << endl;
        return 1; // Exit if the condition is not met
    }

    // Calculate the midpoint of the range
    int midpoint = (start + end) / 2;

    cout << "Comparing numbers from " << start << " to " << end << " with midpoint " << midpoint << ":\n";

    // Iterate through the range using a while loop
    int current = start;
    while (current <= end) {
        if (current < midpoint) {
            cout << current << " is less than the midpoint." << endl;
        } else if (current > midpoint) {
            cout << current << " is greater than the midpoint." << endl;
        } else {
            cout << current << " is equal to the midpoint." << endl;
        }
        current++; // Move to the next number
    }

    return 0;
}
