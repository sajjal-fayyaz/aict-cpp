#include <iostream>
using namespace std;
// Declaring variables
string programName[] = {"BSCS", "IT"}; // Predefined program names
short maxSeats[] = {5, 5 }; // Set maximum seats for both programs to 5
short minPercentage1, minPercentage2; // Minimum eligibility percentages for BSCS and IT
short availableSeats[] = {5, 5}; // Initially, 5 available seats for both programs

string studentName, studentEmail, studentPhone, studentCNIC, appliedProgram;
short marksObtained, totalMarks;
string admissionStatus;

int main() {
    int choice;

    // Main Menu
    cout << "\n--- University Admission Management System ---" << endl;
    cout << "1. Login as Admin" << endl;
    cout << "2. Apply as Student" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        // Admin Login
        string username, password;
        cout << "\n--- Admin Login ---" << endl;
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;

        if (username == "admin" && password == "admin123") {
            // Admin Dashboard
            cout << "\n--- Admin Dashboard ---" << endl;
            cout << "1. Set Minimum Eligibility Criteria" << endl;
            cout << "2. View Application Statuses" << endl;
            cout << "Enter your choice: ";
            int adminChoice;
            cin >> adminChoice;

            if (adminChoice == 1) {
                // Set Minimum Eligibility Criteria
                cout << "\n--- Set Minimum Eligibility Criteria ---" << endl;
                cout << "Enter minimum eligibility percentage for " << programName[0] << ": ";
                cin >> minPercentage1;
                cout << "Enter minimum eligibility percentage for " << programName[1] << ": ";
                cin >> minPercentage2;
                cout << "Eligibility criteria set successfully!" << endl;
            } else if (adminChoice == 2) {
                // View Applications
                cout << "\n--- Application Status ---" << endl;
                if (studentName.empty()) {
                    cout << "No applications to display." << endl;
                } else {
                    cout << "Name: " << studentName << endl;
                    cout << "Program: " << appliedProgram << endl;
                    cout << "Status: " << admissionStatus << endl;
                }
            } else {
                cout << "Invalid choice! Returning to main menu." << endl;
            }
        } else {
            cout << "Invalid credentials! Returning to main menu." << endl;
        }
    } else if (choice == 2) {
        // Student Application
        cout << "\n--- Student Application Form ---" << endl;
        cout << "Enter your name: ";
        cin >> studentName;
        cout << "Enter your email: ";
        cin >> studentEmail;
        cout << "Enter your phone number: ";
        cin >> studentPhone;
        cout << "Enter your CNIC: ";
        cin >> studentCNIC;
        cout << "Enter your marks obtained: ";
        cin >> marksObtained;
        cout << "Enter total marks: ";
        cin >> totalMarks;

        // Program selection
        cout << "Select your preferred program: " << endl;
        cout << "1. " << programName[0] << endl;
        cout << "2. " << programName[1] << endl;
        int programChoice;
        cin >> programChoice;

        // Calculate percentage
        float percentage = (float)marksObtained / totalMarks * 100;
        
        if (programChoice == 1) {
            cout << "You selected " << programName[0] << endl;
            if (percentage >= minPercentage1) {
                if (availableSeats[0] > 0) {
                    cout << "Accepted" << endl;
                    availableSeats[0]--; // Decrease available seats for BSCS
                    admissionStatus = "Accepted";
                    appliedProgram = programName[0];
                } else {
                    cout << "Rejected (Seats full)" << endl;
                    admissionStatus = "Rejected (Seats full)";
                }
            } else {
                cout << "Rejected (Does not meet criteria)" << endl;
                admissionStatus = "Rejected (Does not meet criteria)";
            }
        } else if (programChoice == 2) {
            cout << "You selected " << programName[1] << endl;
            if (percentage >= minPercentage2) {
                if (availableSeats[1] > 0) {
                    cout << "Accepted" << endl;
                    availableSeats[1]--; // Decrease available seats for IT
                    admissionStatus = "Accepted";
                    appliedProgram = programName[1];
                } else {
                    cout << "Rejected (Seats full)" << endl;
                    admissionStatus = "Rejected (Seats full)";
                }
            } else {
                cout << "Rejected (Does not meet criteria)" << endl;
                admissionStatus = "Rejected (Does not meet criteria)";
            }
        } else {
            cout << "Invalid program choice! Application incomplete." << endl;
            admissionStatus = "Incomplete";
        }

        // Display Admission Status
        cout << "--- Admission Status ---" << endl;
        cout << "Name: " << studentName << endl;
        cout << "Program: " << appliedProgram << endl;
        cout << "Status: " << admissionStatus << endl;
    } else if (choice == 3) {
        cout << "Exiting... Thank you!" << endl;
    } else {
        cout << "Invalid choice! Exiting program." << endl;
    }

    return 0;
}
