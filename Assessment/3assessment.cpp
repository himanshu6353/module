#include <iostream>
#include <string>
using namespace std;

class Lecture {
private:
 
    string lecturerName;
    string subjectName;
    string courseName;
    int numberOfLectures;

public:

    Lecture() {
        lecturerName = "";
        subjectName = "";
        courseName = "";
        numberOfLectures = 0;
    }


    assignInitialValues(string name, string subject, string course, int lectures) {
        lecturerName = name;
        subjectName = subject;
        courseName = course;
        numberOfLectures = lectures;
    }

    void addLectureDetails() {
        cout << "Enter Lecturer Name: ";
        cin >>lecturerName;

        cout << "Enter Subject Name: ";
        cin >>subjectName;

        cout << "Enter Course Name: ";
        cin >>courseName;

        cout << "Enter Number of Lectures: ";
        cin >> numberOfLectures;
        cin.ignore();
    }

    displayLectureDetails() const {
        cout << "Lecturer Name: " << lecturerName << endl;
        cout << "Subject Name: " << subjectName << endl;
        cout << "Course Name: " << courseName << endl;
        cout << "Number of Lectures: " << numberOfLectures << endl;
        cout << "-----------------------------" << endl;
    }
};

int main() {
    Lecture lectures[5];

    cout << "==== Lecture Management System ====" << endl;

    for (int i = 0; i < 5; ++i) {
        cout << "\nEnter details for Lecturer " << (i + 1) << ":" << endl;
        lectures[i].addLectureDetails();
    }

   
    cout << "\n--------------------------- Lecture Details ------------------------------------" << endl;
    for (int i = 0; i < 5; ++i) {
        lectures[i].displayLectureDetails();
    }

    cout << "Thank you" << endl;
    return 0;
}

