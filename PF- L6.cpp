#include <iostream>
using namespace std;

int main() {
    char choice; // Variable to check if the user wants to repeat

    do {
        int marks; // Declare marks
        cout << "Enter your marks (0-100): "; // Prompt user for input
        cin >> marks;
        // Determine and display the grade
        if (marks >= 90 && marks <= 100) 
            // Print A if marks are between 90 and 100
            cout << "Your grade is A \n" << endl;
        else if (marks >= 80 && marks <= 89) 
            // Print B if marks are between 80 and 89
            cout << "Your grade is B \n" << endl;
        else if (marks >= 70 && marks <= 79) 
            // Print C if marks are between 70 and 79
            cout << "Your grade is C \n" << endl;
        else if (marks >= 60 && marks <= 69) 
            // Print D if marks are between 60 and 69
            cout << "Your grade is D \n" << endl;
            
        else if (marks >= 0 && marks < 60) 
            // Print Failed if marks are less than 60
            cout << "You have Failed \n" << endl;
        else 
            // Print error message if marks are not in the valid range
            cout << "Invalid marks! Marks should be between 0 and 100. \n" << endl;

        // Ask user if they want to grade another score
        cout << "Do you want to grade another score? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y'); // Repeat if user inputs 'y' or 'Y'

    cout << "Grading process finished. Goodbye!" << endl; // Exit message
    return 0;
}

