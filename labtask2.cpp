#include <iostream>
using namespace std;
int main()
{
    // Student eng and maths marks
    int mathScore;
    cout << "enter your math marks" << endl;
    cin >> mathScore;
    int englishScore;
    cout << "enter your english marks" << endl;
    cin >> englishScore;
    int totalMarks = mathScore + englishScore;
    // calculate percentage 
    float percentage = (totalMarks / 100 * 100);
    if (englishScore && mathScore >= 90)
    {
        cout << "eligible for scholarship";
    }
    else
    {
        cout << "not eligible for scholarship";
    }
    return 0;
}