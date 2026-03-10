# cgpa-calculator
CGPA Calculator in C++

This project is a CGPA (Cumulative Grade Point Average) Calculator developed in C++. It allows students to input their subject details, calculate grades, and compute the CGPA efficiently using object-oriented programming concepts.

Features

Student Information Management: Input and display student's name, roll number, and semester.

Subject Management: Add multiple subjects along with marks and credit hours.

Grade Calculation: Automatically calculates grades based on marks using a standard grading system.

CGPA Calculation: Computes the CGPA considering credit hours and grade points for all subjects.

User-Friendly Menu: Interactive menu to perform operations like adding subjects, displaying information, and calculating CGPA.

Classes Overview

The program uses Object-Oriented Programming (OOP) principles with three main classes:

1. Subject Class

Represents individual subjects and handles grade and point calculations.

Attributes:

name – Name of the subject

marks – Marks obtained

grade – Grade based on marks

credit – Credit hours of the subject

Methods:

inputSubject() – Input subject details from the user

calculateGrade(int marks) – Determine grade based on marks

gradePoint(char grade) – Return grade point for CGPA calculation

display() – Display subject details in a tabular format

getCredit() and getTotalPoints() – Used for CGPA computation

2. Student Class

Handles student-related information.

Attributes:

name – Student's name

roll – Roll number

semester – Current semester

Methods:

inputStudentInfo() – Input student information

displayStudentInfo() – Display student information

3. CGPA Class

Handles the overall CGPA calculation for multiple subjects.

Attributes:

subjects – A vector of Subject objects

Methods:

addSubjects() – Add multiple subjects to the list

displaySubjects() – Display all subjects with grades and points

calculateCGPA() – Compute CGPA using the formula:

CGPA
=
∑
(
Grade Point
×
Credit
)
∑
Credits
CGPA=
∑Credits
∑(Grade Point×Credit)
	​

Grading System
Marks Range	Grade	Grade Point
90–100	A	10
75–89	B	8
60–74	C	6
50–59	D	4
0–49	F	0
How to Use

Run the program.

Enter student details.

Use the menu to:

Add subjects

Display student info

Display subject details

Calculate CGPA

Exit the program when done.

Example Output
Technologies Used

Language: C++

Concepts: Object-Oriented Programming (Classes, Objects, Methods), Vectors, I/O Streams

Future Improvements

Add functionality for multiple students.

Store and load data from files.

Provide a graphical user interface (GUI) version.

Allow flexible grading systems.
Enter Student Name: John
Enter Roll Number: 12345
Enter Semester: 3

===== CGPA Calculator =====
1. Add Subjects
2. Display Student Info
3. Display Subjects
4. Calculate CGPA
5. Exit
Enter Choice: 1

Enter Number of Subjects: 3

Subject 1
Enter Subject Name: Math
Enter Marks: 95
Enter Credit Hours: 4

Subject 2
Enter Subject Name: Physics
Enter Marks: 82
Enter Credit Hours: 3

Subject 3
Enter Subject Name: Chemistry
Enter Marks: 70
Enter Credit Hours: 3

CGPA = 8.60
