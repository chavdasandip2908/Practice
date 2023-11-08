#include <iostream>
#include <string>
using namespace std;

int main() {
    int numStudents, passingGrade;
    
    cout << "Enter the number of students: ";
    cin >> numStudents;
    
    cout << "Enter the passing mark: ";
    cin >> passingGrade;

    string names[100]; // Assume a maximum of 100 students
    int scores[100];
    
    // Input student names and scores
    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter student #" << i + 1 << " name: ";
        cin >> names[i];
        cout << "Enter student #" << i + 1 << " score: ";
        cin >> scores[i];
    }

    // Calculate average score and find the highest score
    double totalScore = 0;
    int highestScore = -1;
    for (int i = 0; i < numStudents; ++i) {
        totalScore += scores[i];
        if (scores[i] > highestScore) {
            highestScore = scores[i];
        }
    }

    double averageScore = totalScore / numStudents;

    // Display results
    cout << "Average score: " << averageScore << endl;
    cout << "Highest score: " << highestScore << endl;

    cout << "Students who didn't pass:" << endl;
    for (int i = 0; i < numStudents; ++i) {
        if (scores[i] < passingGrade) {
            cout << names[i] << " (Score: " << scores[i] << ")" << endl;
        }
    }

    return 0;
}

