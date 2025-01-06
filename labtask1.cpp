#include <iostream>
using namespace std;
int main() {
    double a, b, c; 
    // Prompt user for input
    cout << "the length of Side a of the triangle: ";
    cin >> a;
    cout << "the length of Side b of the triangle: ";
    cin >> b;
    cout << "the length of Side c of the triangle: ";
    cin >> c;
    // check for invalid sides lengths
    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "Invalid Triangle Sides must be greater than 0" << endl;
    } 
    else if (a + b > c && a + c > b && b + c > a) {
    //triangle inequality , check type
        if (a == b && b == c) {
            cout << "In this case, the triangle is Equilateral" << endl;
        } else
         if (a == b || a == c || b == c) {
            cout << "In this case, the triangle is Isosceles" << endl;
        } else {
            cout << "In this case, the triangle is Scalene" << endl;
        }
    } 
    else {
        cout << "Invalid Triangle. The sides do not satisfy the triangle inequality theorem." << endl;
    }
    return 0;
}