#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

class Subject {
private:
    string name;
    int marks;
    char grade;
    float credit;

public:

    char calculateGrade(int m) {
        if (m >= 90) return 'A';
        else if (m >= 75) return 'B';
        else if (m >= 60) return 'C';
        else if (m >= 50) return 'D';
        else return 'F';
    }

    float gradePoint(char g) {
        switch(g) {
            case 'A': return 10;
            case 'B': return 8;
            case 'C': return 6;
            case 'D': return 4;
            default: return 0;
        }
    }

    void inputSubject() {

        cout << "Enter Subject Name: ";
        cin >> name;

        cout << "Enter Marks: ";
        cin >> marks;

        cout << "Enter Credit Hours: ";
        cin >> credit;

        grade = calculateGrade(marks);
    }

    float getCredit() {
        return credit;
    }

    float getTotalPoints() {
        return gradePoint(grade) * credit;
    }

    void display() {

        cout << setw(12) << name
             << setw(10) << marks
             << setw(8) << grade
             << setw(10) << credit
             << setw(10) << gradePoint(grade)
             << endl;
    }
};

class Student {

private:
    string name;
    string roll;
    int semester;

public:

    void inputStudentInfo() {

        cout << "Enter Student Name: ";
        cin >> name;

        cout << "Enter Roll Number: ";
        cin >> roll;

        cout << "Enter Semester: ";
        cin >> semester;
    }

    void displayStudentInfo() {

        cout << "\n------ Student Information ------\n";
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll << endl;
        cout << "Semester: " << semester << endl;
    }
};

class CGPA {

private:
    vector<Subject> subjects;

public:

    void addSubjects() {

        int n;
        cout << "Enter Number of Subjects: ";
        cin >> n;

        for(int i=0;i<n;i++) {

            Subject s;

            cout << "\nSubject " << i+1 << endl;
            s.inputSubject();

            subjects.push_back(s);
        }
    }

    void displaySubjects() {

        if(subjects.size()==0) {
            cout << "No subjects added\n";
            return;
        }

        cout << "\n------ Subject Details ------\n";

        cout << setw(12) << "Subject"
             << setw(10) << "Marks"
             << setw(8) << "Grade"
             << setw(10) << "Credit"
             << setw(10) << "Point"
             << endl;

        for(int i=0;i<subjects.size();i++) {
            subjects[i].display();
        }
    }

    void calculateCGPA() {

        if(subjects.size()==0) {
            cout << "No subjects added\n";
            return;
        }

        float totalCredits = 0;
        float totalPoints = 0;

        for(int i=0;i<subjects.size();i++) {

            totalCredits += subjects[i].getCredit();
            totalPoints += subjects[i].getTotalPoints();
        }

        float cgpa = totalPoints / totalCredits;

        cout << fixed << setprecision(2);
        cout << "\nCGPA = " << cgpa << endl;
    }
};

int main() {

    Student s;
    CGPA c;
    int choice;

    s.inputStudentInfo();

    while(true) {

        cout << "\n===== CGPA Calculator =====\n";
        cout << "1. Add Subjects\n";
        cout << "2. Display Student Info\n";
        cout << "3. Display Subjects\n";
        cout << "4. Calculate CGPA\n";
        cout << "5. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                c.addSubjects();
                break;

            case 2:
                s.displayStudentInfo();
                break;

            case 3:
                c.displaySubjects();
                break;

            case 4:
                c.calculateCGPA();
                break;

            case 5:
                cout << "Program Ended\n";
                return 0;

            default:
                cout << "Invalid Choice\n";
        }
    }
}