//Author: Mark Edwards
//Problem:
//Write C++ statement(s) that inlcude the header files iostream and string
//Write C++ statement(s) that allow you to use cin, cout, endl, without std::
//Write C++ statement(s) that declare the variables: name(string), studyHours(double)
//Write C++ statement(s) that prompt and input a string into name and a double
//into studyHours
//Write C++ statement(s) that outputs the values of name and studyHours with
//the appropriate text. For example, if the value of name is "Donald" and the value
//of studyHours is 4.5, the output is: Hello, Donald! On Saturday, you need to study
// 4.5 hours for the exam.
//Compile and run your program

#include <iostream>
#include <string>

using namespace std;



int main()
{
	string name;
	double studyHours;

	cout << "Enter your name: ";
	cin >> name;
	cout << endl;
	cout << "Enter your study hours: ";
	cin >> studyHours;
	cout << endl;

	cout << "Hello, " << name << "! On Saturday, you need to study ";
	cout << studyHours << " hours for the exam.";

	return 0;
}
