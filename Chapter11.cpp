// Chapter11.cpp 
// This program will keep a list of 3 test scores and average a students grade using structures.
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Grades
{
	string sdntName;
	int sdntNumber;
	int test;
	int average;
	char Grade;
};

int main()
{
	Grades student;
	const int TESTAMT = 3;
	Grades tests[TESTAMT];
	int count;
	int sum = 0;

	cout << "Please, enter your 5 digit Student Identification Number: " << endl;
	cin >> student.sdntNumber;

	cout << "Please enter your name: " << endl;
	cin.ignore();
	getline(cin, student.sdntName);

	do {
		cout << "Please enter your " << TESTAMT << " test scores: " << endl;

		for (count = 0; count < TESTAMT; count++)
			cin >> tests[count].test;

		cout << "Your test scores are:\n";
		for (count = 0; count < TESTAMT; count++)
		{
			cout << tests[count].test << " " << endl;
			sum = sum + tests[count].test;
		}

		student.average = sum / TESTAMT;
		cout << "The average is: " << student.average << endl;

		if (student.average >= 91 && student.average <= 100)
		{
			cout << "Congratulations! You have an A.\n";
			student.Grade = 'A';
		}
		else if (student.average >= 81 && student.average <= 90)
		{
			cout << "Not bad. You have a B.\n";
			student.Grade = 'B';
		}
		else if (student.average >= 71 && student.average <= 80)
		{
			cout << "You have a C.\n";
			student.Grade = 'C';
		}
		else if (student.average >= 61 && student.average <= 70)
		{
			cout << "You have a D.\n";
			student.Grade = 'D';
		}
		else if (student.average >= 0 && student.average <= 60)
		{
			cout << "Better luck next time! You have an F.\n";
			student.Grade = 'F';
		}
		else
		{
			cout << "Invalid grades entered!! Please try again.\n";
			student.Grade = 'Z';
			sum = 0;
		}
	} while (student.Grade == 'Z');
	cout << student.sdntName << "\nStudent Number: " << student.sdntNumber << "\n";
	cout << "Your grade is: " << student.Grade << " for this " << TESTAMT << " course.\n";

	system("pause");
}