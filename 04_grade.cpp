#include <iostream>
using namespace std;

int main() {
    // Declare variables for marks
    int sub1, sub2, sub3, sub4, sub5;
    int total, average;

    // Input marks for 5 subjects
    cout << "Enter marks for Subject 1: ";
    cin >> sub1;
    cout << "Enter marks for Subject 2: ";
    cin >> sub2;
    cout << "Enter marks for Subject 3: ";
    cin >> sub3;
    cout << "Enter marks for Subject 4: ";
    cin >> sub4;
    cout << "Enter marks for Subject 5: ";
    cin >> sub5;

// Calculate total and average
    total = sub1 + sub2 + sub3 + sub4 + sub5;
    average = total / 5;

    // Display total and average
    cout << "\nTotal Marks: " << total << "/500" << endl;
    cout << "Average: " << average << "%" << endl;

    // Determine grade based on average
    if (average >= 90) {
        cout << "Grade: A" << endl;
    } else if (average >= 80) {
        cout << "Grade: B" << endl;
    } else if (average >= 70) {
        cout << "Grade: C" << endl;
    } else if (average >= 60) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: F (Fail)" << endl;
    }

    return 0;
}
    

